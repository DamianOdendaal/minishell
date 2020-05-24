#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>

void	parser(char *line, char **av)
{
	while (*line != '\0')
	{
		while (*line == ' ' || *line == '\t' || *line == '\n')
			*line++ = '\0';
		*av++ = line;
		while (*line != '\0' && *line != '\t' && *line != '\n' && *line != ' ')
			line++;
	}
	*av = '\0';
}

void	execute(char **av)
{
	pid_t 	pid;
	int		status;

	if ((pid = fork()) < 0)
	{
		printf("*** Error: failed to create child process\n");
		exit(1);
	}
	else if (pid == 0)
	{
		if (execvp(*av, av) < 0)
		{
			printf("***Error: failed to execute command\n");
			exit(1);
		}
	}
	else
	{
		while(wait(&status) != pid);
	}
}

void	main(void)
{
	char	line[1024];
	char	*argv[64];

	while (1)
	{
		printf("TestShell$-> ");
		gets(line);
		printf("\n");
		parser(line, argv);
		if (strcmp(argv[0], "exit") == 0)
			exit(0);
		execute(argv);
	}
}