#include "main.h"

/**
* create_file - creates file with read and write permissions
* @filename: name of the file to create
* @text_content: null terminated string to put in filename
* Return: 1 success, -1 failure
*/
int create_file(const char *filename, char *text_content)
{
	int i, wr, fd = open(filename, O_CREAT, 600 | O_TRUNC | O_RDWR);

	if (!filename || *filename == '\0')
		return (-1);

	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)

	wr = write(fd, text_content, i);
	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
