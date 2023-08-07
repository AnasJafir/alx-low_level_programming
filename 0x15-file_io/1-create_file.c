#include "main.h"
/**
 * _strlen - returns string length
 * @str: string input
 * Return: length of the string
*/
int _strlen(const char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
/**
 * create_file - function that creactes a file
 * @filename: file to create
 * @text_content: text to put into the file
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file;
	int bytes;
	int len;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		bytes = write(file, text_content, len);
		if (bytes == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
