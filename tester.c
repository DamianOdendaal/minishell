

#include "includes/minishell.h"




int   ft_strchr_index(const char *s, int c)
{
	char	a;
	int	    len;
 

	a = (char)c;
	len = ft_strlen(s);
  

	if (s[len] == a)
		return (len);

	while (len)
	{
		if (s[len - 1] == a)
			return (len - 1);
		len--;
	}
	return (0);
}

int main(void)
{
	char str[255] = "this is a really long string that has a lot of words \" ";
	char nobody = '"';
	char nobody2 = '\"';
	int len = ft_strlen(str);
	int tester = ft_strchr_index(str, nobody);
	

	printf("this is a test %d -> %c", nobody, nobody);
	printf("this is len %d --> %c", nobody2, nobody2);
	ft_putchar('\n');
	ft_putchar('\n');
    return (0);
}

