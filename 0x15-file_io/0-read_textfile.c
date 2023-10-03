#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - read contents of a text file
 * @filename: name of the file
 * @letters: number of letters to read.
 * Return: number of bytes read or 0 if it fails
 * Description: prints letters or return 0 if fails to read or write
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	size_t read_bytes = 0;
	size_t written_bytes = 0;
	char *buffer = NULL;

	if (filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	read_bytes = read(fd, buffer, letters);

	if (read_bytes == 0)
	{
		close(fd);
		free(buffer);

		return (0);
	}

	written_bytes = write(STDIN_FILENO, buffer, read_bytes);
	if (written_bytes == 0 || written_bytes != read_bytes)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (written_bytes);
}

