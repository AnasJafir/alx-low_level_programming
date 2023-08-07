#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

#define USAGE "Usage: cp file_from file_to\n"
#define NO_READ "Error: Can't read from file %s\n"
#define NO_WRITE "Error: Can't write to %s\n"
#define NO_CLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define BUFFER_SIZE 1024

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int _strlen(const char *str);
int append_text_to_file(const char *filename, char *text_content);

#endif
