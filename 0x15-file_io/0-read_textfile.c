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
	char buffer[letters + 1]


	if (filename == NULL || letters < 1)
	{
		return (0);
	}

	fd = open(*filename, O_RDONLY);

	if (fd > -1)
	{
		read_bytes = read(fd, buffer, letters);

		if (read_bytes == -1)
		{
			fclose(fd);

			return (0);
		}

		ready_bytes[letters] = '\0';

		write(STDOUT_FILENO, buffer, letters);

		fclose(fd);
	}
	else
	{
		return (0);

	}



}
