#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (str1[i] == str2[i] && i < n)
		i++;
	return ((int)(str1[i] - str2[i]));
}
/*
#include <stdio.h>

int main ()
{
	int arr[] = {1,2,3};
	int arr2[] = {1,2,3};
	printf("%d", ft_memcmp(arr, arr2, sizeof(int) * 3));
}
*/
