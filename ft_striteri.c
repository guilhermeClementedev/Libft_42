#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void test(unsigned int i , char *s)
{
	i = ft_toupper(*s);
	*s = i;
	printf("%c", *s);
}

int main()
{
	char ptr[] = "testeando";
	ft_striteri(ptr, test);
}
*/
