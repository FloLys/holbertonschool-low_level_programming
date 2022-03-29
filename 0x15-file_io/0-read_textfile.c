#include "main.h"

/**
* read_textfile - reads a text file and prints it to the posix sdout
* @filename: filename string
* @letters: number of letters to read and print
* Return: actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t counter;
	int fd = open(filename, O_RDONLY);
	char *buffer = malloc(sizeof(char) * letters);

	if (!filename || *filename == '\0')
		return (0);

	if (fd == -1)
		return (0);

	if (buffer == NULL)
		return (0);

	counter = read(fd, buffer, letters);
	if (counter == -1)
		return (0);

	counter = write(STDOUT_FILENO, buffer, counter);
	if (counter == -1)
		return (0);

	close(fd);
	free(buffer);

	return (counter);
}
