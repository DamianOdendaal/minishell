

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
	char str[255] = "this is a really long string that has a lot of words \' ";
	char nobody = '\'';
	int len = ft_strlen(str);
	int tester = ft_strchr_index(str, nobody);

	printf("this is a test %d\n%d", tester ,len);
    return (0);
}

