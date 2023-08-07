#include "main.h"
/**
 * _strlen - returns the length of a string
 * @str: string input
 * Return: the length of str
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
 * append_text_to_file - append text at the end of a file
 * @filename: the text file
 * @text_content: the text to append
 * Return: 1 on success or -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes;
	int len;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_TRUNC);
	if (text_content)
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
