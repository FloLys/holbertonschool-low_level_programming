#include "main.h"

/**
* read_textfile - reads a text file and prints it to the posix sdout
* @filename: filename string
* @letters: number of letters to read and print
* Return: actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int counter, fd = open(filename, O_RDONLY);
	char *buffer = malloc(sizeof(char) * letters + 1);

	if (!filename || *filename == '\0')
		return (0);

	if (fd == -1)
		return (0);

	if (buffer == NULL)
		return (0);

	read(fd, buffer, letters);
	buffer[letters] = '\0';
	counter = write(STDOUT_FILENO, buffer, letters);
	close(fd);

	return (counter);
}
