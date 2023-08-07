#include "main.h"
/**
 * main - Entry point
 * @argc: argument index
 * @argv: argument value
 * Return: 1 on success, -1 on failure
*/
int main(int argc, char *argv[])
{
	int file_from = 0, file_to = 0;
	ssize_t bytes;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to"), exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while ((bytes = read(file_from, buffer, 1024)) > 0)
	{
		if (write(file_to, buffer, bytes) != bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	file_from = close(file_from);
	file_to = close(file_to);
	if (file_from)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	}
	if (file_to)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	}
	return (1);
}
