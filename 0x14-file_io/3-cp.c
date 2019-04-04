#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
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
	int fd, fd2, aux, n;
	char bf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to"),
		exit(97);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s", argv[1]),
			exit(98);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s", argv[2]),
			exit(99);
	while (aux)
	{n = read(fd, bf, 1024);
	if (n == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s", argv[1]),
			exit(98);
	aux = write(fd2, bf, n);
	if (aux == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s", argv[2]),
			exit(99);
	}
	aux = close(fd);
	if (aux == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %i", fd),
			exit(100);
	aux = close(fd2);
	if (aux == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %i", fd2),
			exit(100);
	return (0);
}
