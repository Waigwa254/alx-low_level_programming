#include "main.h"

/**
 * create_file - its creates a filr
 * @filename: points file to be created
 * @text_content: points str to write the file
 * Return: fails --1 otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
int fd, w, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 06000);
w = write(fd, text_content, len);
if (fd == -1 || w == -1)
return (-1);
close(fd);
return (1);
}