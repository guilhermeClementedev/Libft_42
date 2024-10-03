#include "libft.h"
#include <stdio.h>
#include <string.h>

int main ()
{
	char s[] = {-128, 0, 127, 0};
	char sCpy[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	printf("s, sCpy: %d\n", ft_memcmp(s, sCpy, 4));
	printf("s, s2: %d\n", ft_memcmp(s, s2, 0));

	printf("o, sCpy: %d\n", memcmp(s, sCpy, 4));
	printf("o, s2: %d\n", memcmp(s, s2, 0));

}

