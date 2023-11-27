#include "main.h"

/**
*read_textfile - Reads a text file and prints it to the standard output
*@filename: Name of the file to read
*@letters: Number of letters to read and print
*Return: Number of letters actually read and printed, or 0 on failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int file_n;
ssize_t lengthr, lengthw;
char *count;

if (filename == NULL)
return (0);
file_n = open(filename, O_RDONLY);
if (file_d == -1)
return (0);
count = malloc(sizeof(char) * letters);
if (count == NULL)
{
close(file__n);
return (0);
}
lengthr = read(file_n, count, letters);
close(file_n);
if (lengthr == -1)
{
free(count);
return (0);
}
lengthw = write(STDOUT_FILENO, count, lengthr);
free(count);
if (lengthr != lengthw)
return (0);
return (lengthw);
}
