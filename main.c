#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdint.h>

int main ()
{
	char src[] = "coucou";
	char dest[10];
	memset(dest, 'A', 10);
	printf("fake :%d\n",ft_strlcpy(dest, src, 0) );
}

