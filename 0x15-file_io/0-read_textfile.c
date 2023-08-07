#include "main.h"
/**
 * read_textfile - reads a textfile and prints it the STDOUT
 * @filename: source file
 * @letters: number of letters should be read an printed
 * Return: the number of letters the function could read and print
 *         otherwise 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t num;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	num = read(file, buffer, letters);
	num = write(STDOUT_FILENO, buffer, num);
	close(file);
	free(buffer);
	return (num);
}
