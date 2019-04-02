#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include "holberton.h"
/**
 *create_file - create_file
 *
 *@filename: name of the new file
 *@text_content: information to write on the new file
 *
 *Return: 1 if the file is create or -1 if filename is NULL or fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	fd  = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		printf("fails");
		return (-1);
	}
	write(fd, text_content, strlen(text_content));
	return (1);
}
