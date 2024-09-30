#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s,fd);
	ft_putchar_fd('\n',fd);
}
/*
int main()
{
	ft_putendl_fd("I LOVE VASCO",1);
}
*/
