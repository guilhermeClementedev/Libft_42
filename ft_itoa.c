#include "libft.h"

int	ft_sizenbr(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
		return (11);
	if (nb < 0)
	{
		count++;
		nb *= -1;
	}
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*ptr;
	char	num;

	size = ft_sizenbr(n);
	printf("tamanho size: %d\n", size);
	ptr = (char *) ft_calloc(size + 1, 1);
	if (size == 1 || ptr == NULL)
		return (NULL);
	ptr[size] = '\0';
	if (n < 0)
	{
		ptr[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		size--;
		num = (n % 10) + '0';
		ptr[size] = num;
		n = (n / 10);
	}
	return (ptr);
}
/*
#include <stdio.h>

int main()
{
	printf("%s\n",ft_itoa(-10));
}
*/
