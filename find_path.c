#include "newshell.h"

/**
 * cmd_path - a function that locates the path of a command
 * @cmd: command to be located
 * Return: the command path or NULL
 */

char *cmd_path(char *cmd)
{
	char *location, *location_cp, *token, *path;
	int len, dir_len;
	struct stat buffer;

	location = custom_getenv("PATH");
	if (location)
	{
		location_cp = _strdup(location);
		len = _strlen(cmd);
		token = strtok(location_cp, ":");
		while (token)
		{
			dir_len = _strlen(token);
			path = malloc(len + dir_len + 2);
			_strcpy(path, token);
			_strcat(path, "/");
			_strcat(path, cmd);
			_strcat(path, "\0");

			if (stat(path, &buffer) == 0)
			{
				free(location_cp);
				return (path);
			}
			else
			{
				free(path);
				token = strtok(NULL, ":");
			}
		}
		free(location_cp);
		if (stat(cmd, &buffer) == 0)
		{
			return (cmd);
		}
		return (NULL);
	}
	return (NULL);
}






