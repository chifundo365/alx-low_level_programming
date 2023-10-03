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
	ssize_t read_bytes = 0;
	int fd;
	char *buffer = malloc(letters + 1);

	if (buffer == NULL)
	{	
		free(buffer);
		return (0);
	}


	if (filename == NULL)
	{
		free(buffer);
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd > -1)
	{
		read_bytes = read(fd, buffer, letters);

		if (read_bytes == -1)
		{
			close(fd);

			return (0);
		}

		buffer[letters] = '\0';

		write(STDOUT_FILENO, buffer, letters);

		free(buffer);
		close(fd);
	}
	else
	{
		close(fd);
		free(buffer);

		return (0);

	}


	return (read_bytes);

}
