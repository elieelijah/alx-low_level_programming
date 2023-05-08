#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, a non-zero value on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd, wr, cl;
	char buf[1024];

	/* Check the number of arguments */
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	/* Open the source file for reading */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);

	/* Open the destination file for writing */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	/* Copy the content of the source file to the destination file */
	do {
		rd = read(fd_from, buf, 1024);
		if (rd == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
					argv[1]), exit(98);
		wr = write(fd_to, buf, rd);
		if (wr == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	} while (rd == 1024);

	/* Close the file descriptors */
	cl = close(fd_from);
	if (cl == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	cl = close(fd_to);
	if (cl == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}

