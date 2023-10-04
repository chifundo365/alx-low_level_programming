#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - finds length of a string
 * @string:  null terminated string
 * Return: length of the string or 0
 * Description: finds and returns length of a string or 0 if string is null
 */

int _strlen(char *string)
{
	int length = 0;

	while (*string != '\0')
	{
		string++;
		length++;
	}

	return (length);
}

/**
 * create_file - creates a new file and adds data
 * @filename: the name of the file
 * @text_content: text to write to the file
 * Return: 1 if succeed or -1 if failed
 * Description: succeed if the file is created and wirtten to
 */

int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	mode_t permissions = 0600;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, permissions);

	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	if (text_content != NULL)
	{
		if (!write(fd, text_content, _strlen(text_content)))
		{
			close(fd);
			return (-1);
		}

	}

	return (1);
}

