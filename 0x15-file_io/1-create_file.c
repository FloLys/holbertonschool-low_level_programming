#include "main.h"

/**
* create_file - creates file with read and write permissions
* @filename: name of the file to create
* @text_content: null terminated string to put in filename
* Return: 1 success, -1 failure
*/
int create_file(const char *filename, char *text_content)
{
	int i, fd = open(filename, O_CREAT, 600 | O_RDWR);
	/*char *buffer = malloc(sizeof(char) * text_content);*/

	if (!filename || *filename == '\0')
		return (-1);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (-1);

	for (i = 0; *text_content <= '\0'; i++)

	write(fd, text_content, i);

	close(fd);
	/*free(buffer);*/

	return (1);
}
