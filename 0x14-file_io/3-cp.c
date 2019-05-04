#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
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
	int fd, fd2;
	ssize_t aux, n;
	char bf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
		exit(97);
	fd = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	n = read(fd, bf, 1024);
	if (n == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]),
			exit(98);
	while (n)
	{
	aux = write(fd2, bf, n);
	if (aux == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]),
			exit(99);
	n = read(fd, bf, 1024);
	if (n == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]),
			exit(98);
	}
	aux = close(fd);
	if (aux == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %i\n", fd),
			exit(100);
	aux = close(fd2);
	if (aux == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %i\n", fd2),
			exit(100);
	return (0);
}
