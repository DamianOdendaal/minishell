

#include <stdio.h>
#include <string.h>

size_t		env_len_on_steroids(char **env)
{
	size_t		array_index;
    size_t      full_length;

	array_index = 0;
    full_length = 0;
	while (env[array_index])
    {
        full_length += strlen(env[array_index]);
		array_index++;
    }
    return (full_length);
}



int main(int ac, char **av, char **env)
{
    size_t len;
    (void)ac;
    (void)av;

    char hey[] = "Awe bra";
    len = env_len_on_steroids(env);
    printf("%ld\n", len);
    printf("\033[1;31m %s \033[0m", hey);

    return (0);
}

