#include "main.h"
/**
 * main - entry point
 * @argc: arguments index
 * @argv: arguments value
 * Return: 1 on success, -1 on failure
*/
int main(int argc, char **argv)
{
	int f_from = 0, f_to = 0;
	ssize_t bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	f_from = open(argv[1], O_RDONLY);
	if (f_from == -1)
		dprintf(STDERR_FILENO, NO_READ, argv[1]), exit(98);
	f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (f_to == -1)
		dprintf(STDERR_FILENO, NO_WRITE, argv[2]), exit(99);
	while ((bytes = read(f_from, buffer, BUFFER_SIZE)) > 0)
		if (write(f_to, buffer, bytes) != bytes)
			dprintf(STDERR_FILENO, NO_WRITE, argv[2]), exit(99);
	if (bytes == -1)
		dprintf(STDERR_FILENO, NO_READ, argv[1]), exit(98);

	f_from = close(f_from);
	f_to = close(f_to);
	if (f_from)
		dprintf(STDERR_FILENO, NO_CLOSE, f_from), exit(100);
	if (f_to)
		dprintf(STDERR_FILENO, NO_CLOSE, f_from), exit(100);

	return (EXIT_SUCCESS);
}
