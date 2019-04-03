#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 *read_textfile - reads a text file and prints it to the POSIX standard output
 *
 *@filename: file to print
 *@letters: number to characters to prints
 *
 *Return: the number of characters to prints else 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, printed;
	char *s;

	s = malloc(letters + 1);
	if (s == NULL)
	{
		free(s);
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	printed = read(fd, s, letters);
	write(1, s, letters);
	close(fd);
	return (printed);
}
