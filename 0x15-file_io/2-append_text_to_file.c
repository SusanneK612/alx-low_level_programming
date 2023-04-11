#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>


/**
* append_text_to_file - appends text at the end of a file
* @filename: a pointer to the name of the file
* @text_content: the string to add to the end of the file
*
* Return: if the function fails or filename is NULL --1
* 	if the file does not exist the user lacks write permissions --1
* 	otherwise -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int op, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	w = write(op, text_content, len);

	if (op == -1 || w == -1)
		return (-1);

	close(op);

	return (1);
}
