#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "main.h"

/**
 * close_fd - close file descriptor
 * @fd: file descriptor to close
 * Description: closes a file deacriptor and prints error if fails.
 */

void close_fd(int fd)
{
	int result = 0;


	if (fd != -1)
	{
		result = close(fd);
	}

	if (result != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * create_file_to - creates a file.
 * @file_to: name of the file
 * Description: creates a file if doesnt exits or opens it for writing
 * Return: fd of newly created file
 */

int create_file_to(char *file_to)
{
	int fd = open(file_to, O_WRONLY | O_EXCL | O_TRUNC);
	mode_t permissions = 0664;
	int status = 0;

	if (fd == -1)
	{
		fd = open(file_to, O_WRONLY | O_CREAT, permissions);

		if (fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close_fd(fd);
			exit(99);
		}

		status = chmod(file_to, permissions);

		if (status == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close_fd(fd);
			exit(99);
		}

	}

	return (fd);
}

/**
 * read_write - reads and write to a file.
 * @file_from: name of file to read from
 * @fd_file_to: file descriptor to copy to
 * Description: open a file for reading and writes to the apppropriate file.
 */

void read_write(char *file_from, int fd_file_to, char *file_to)
{	int fd_file_from = open(file_from, O_RDONLY);
	char *buffer = malloc(sizeof(char) * 1024);
	ssize_t read_length = 0;

	if (buffer == NULL)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close_fd(fd_file_from);
		close_fd(fd_file_to);
		free(buffer);
		exit(98);
	}

	if (fd_file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close_fd(fd_file_from);
		close_fd(fd_file_to);
		free(buffer);
		exit(98);
	}

	do {	read_length = read(fd_file_from, buffer, 1024);
		if (read_length == -1)
		{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			close_fd(fd_file_to);
			close_fd(fd_file_from);
			free(buffer);
			exit(98);
		}

		if (write(fd_file_to, buffer, read_length) != read_length)
		{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close_fd(fd_file_from);
			close_fd(fd_file_to);
			free(buffer);
			exit(99);
		}
	} while (read_length > 0);
	close_fd(fd_file_from);
	close_fd(fd_file_to);
	free(buffer);
}



/**
 * copy_to - copies content of a file to another
 * @file_from: source of the content to copy from
 * @file_to: file to copy to
 * Description:fails prints error to stderror
 */

void copy_to(char *file_from, char *file_to)
{
	int fd_file_to = create_file_to(file_to);

	read_write(file_from, fd_file_to, file_to);
}

/**
 * main - run the code
 * @ac: number of arguments
 * @av: pointer to the entered strings
 * Return: 0 always
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	if (av[1] != NULL && av[2] != NULL)
	{
		copy_to(av[1], av[2]);

	}
	else
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);

	}

	return (0);
}

