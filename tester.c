

#include "includes/minishell.h"




static void	draw_header(void)
{
	ft_putchar('\n');
	ft_putendl("                 ███           ███  ");
	ft_putendl("");
	ft_putendl(" ▄▄▄▄▄███▄▄▄▄▄▄▄ ███ ███▄▄▄▄▄▄ ███  ██████████   ███    ███  █████████  ███       ███");
	ft_putendl(" ███▀▀▀███▀▀▀███ ███ ███▀▀▀███ ███  ███    ███   ███    ███  ███    ██  ███       ███");
	ft_putendl(" ███   ███   ███ ███ ███   ███ ███  ███    ███   ███    ███  ███    ██  ███       ███");
	ft_putendl(" ███   ███   ███ ███ ███   ███ ███  ███          ███▄▄▄▄███  ███▄▄▄     ███       ███");
	ft_putendl(" ███   ███   ███ ███ ███   ███ ███  ██████████   ███▀▀▀▀███  ███▀▀▀     ███       ███");
	ft_putendl(" ███   ███   ███ ███ ███   ███ ███         ███   ███    ███  ███    ██  ███       ███");
	ft_putendl(" ███   ███   ███ ███ ███   ███ ███  ███    ███   ███    ███  ███    ██  ███    ██ ███▌   ██");
	ft_putendl(" ███   ███   ███ ███ ███   ███ ███  ██████████   ███    ███  █████████  █████████ █████████");
	ft_putendl("");
	ft_putendl("By the person you expected the least");
	ft_putendl("Not you");
	return ;
}

int main(void)
{
	draw_header();
    return (0);
}

