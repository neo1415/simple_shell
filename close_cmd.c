#include "shell.h"

/**
* exit_cmd - handles the exit command
* @command: tokenized command
* @line :an input read from stdin
* Return: null
*/

void close_cmd(char **command, char *line)
  
{
  
free(line);
free_buffers(command);  
exit(0);
  
}
