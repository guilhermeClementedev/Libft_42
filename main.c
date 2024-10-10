#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>
#include <stdint.h>

int main ()
{
	int i = 0;
	char * * tab = ft_split("  tripouille  42  ", ' ');
	while (i < 3)
	{
		printf("%d- %s\n", i , tab[i]);
		i++;
	}
}
