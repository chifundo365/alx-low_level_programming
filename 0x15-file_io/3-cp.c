#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>
#include "main.h"

/**
 * copy_to - copies content of a file to another
 * @file_from: source of the content to copy from
 * @file_to: file to copy to
 * Return: 1 on success or integer greater than 96 if it fails
 * Description:fails prints error to stderror
 */

int copy_to(char *file_from, char *file_to)
{
	int fd1 = 0;
	int fd2 = 0;
	int read_bytes  = 0;
	char buffer[1024];
	mode_t mode = 0664;

	fd1 = open(file_from, O_RDONLY); /* file to read from */
	fd2 = open(file_to, O_WRONLY | O_TRUNC);
	if (fd1 == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (fd2 == -1)
	{	fd2 = open(file_to, O_WRONLY | O_CREAT | O_EXCL,  mode);
		if (fd2 == -1)
		{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	do {
		read_bytes = read(fd1, buffer, sizeof(buffer));
		if (read_bytes == 0)
		{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		if (write(fd2, buffer,  read_bytes) == 0)
		{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_from);
			exit(99);
		}
	} while (read_bytes > 0);
	if (close(fd1) != 0)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) != 0)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (1);
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

	return (0);
}

