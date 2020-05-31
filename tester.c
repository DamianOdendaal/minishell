

#include <stdio.h>
#include <string.h>


#include <unistd.h>




void    changer(char *str, int change)
{

    printf("%d\n", strlen(str));
    change = 10;
}


int main(int ac, char **av, char **env)
{
    size_t len;
    (void)ac;
    (void)av;
    int result;
    const char *filename = "/home/Mr_Ode/Documents/minishell/libft/";


    result = access(filename, F_OK);
    printf("%d\n", result);


    char *str = strdup("Awe bra");
    // len = env_len_on_steroids(env);
    int test = 2;
    changer(str, test);
    printf("This is the new test %d\n", test);

    return (0);
}

