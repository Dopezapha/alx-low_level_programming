#include "main.h"

/**
* create_file - A Function that creates a new file.
* @filename: A pointer to the file  name.
* @text_content: A pointer to a string to write to the file
* Return: Always return -1, Otherwise - 1.
*/
int create_file(const char *filename, char *text_content)
{
int a, b, len = 0;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
b = write(a, text_content, len);
if (a == -1 || b == -1)
return (-1);
close(o);
return (1);
}
