#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "holbeton.h"
/**
 *copy - program that copies the content of a file to another file
 *
 *@origin: file where are the origin information to copy
 *@dest: file where is saves the information of origin
 *
 *Return: 0
 */
int copy(const char *origin, char *dest)
{
	int fd1, fd2;
	char buffer[1024];

	if (origin == NULL)
	{
		exit (98);
	}
	fd1 = open(origin, O_RDONLY);
	if (fd1 == -1)
	{
		exit (98);
	}
	fd2 = open(dest, O_WRONLY | O_CREAT | O_APPEND);
	if (fd2 == -1)
	{
		exit (98);
	}
	read(fd, buffer, 1024);
	write(origin
	return (0);
}
/**
 *main - program that copies the content of a file to another file
 *
 *@argc: number of elements
 *@argv: file to copy
 *
 *Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(2, "Usage: copy file_from file_to");
		exit(97);
	}
	copy(argv[1], argv[2]);
	return (0);
}
