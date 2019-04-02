#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include "holberton.h"
/**
 *append_text_to_file - function that appends text at the end of a file
 *
 *@filename: name of the file
 *@text_content: information to save in the file
 *
 *Return: -1 if the file no exist or text_content is null, else 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		write(fd, text_content, strlen(text_content));
	}
	return (1);
}
