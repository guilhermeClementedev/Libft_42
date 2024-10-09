#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>
#include <stdint.h>

int main ()
{
	char *s = strdup("0123456789");
	s = ft_substr(s, 9, 10);
	printf ("%s", s);
}
