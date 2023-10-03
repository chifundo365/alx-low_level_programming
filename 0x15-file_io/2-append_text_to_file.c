#include <unistd.h>
#include <fcntl.h>
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
 * append_text_to_file - appends text to a file
 * @filename: the name of the file
 * @text_content: text to write to
 * Return: 1 if succeeded or 0 if fails to append to  a file
 * Description: opens and append text to a file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

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

	close(fd);
	return (1);
}

