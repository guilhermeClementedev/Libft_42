#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *str1;
	unsigned char *str2;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (str1[i] == str2[i] && i < n)
		i++;
	return ((int) (str1[i] - str2[i]));
}

int main ()
{
	
}
