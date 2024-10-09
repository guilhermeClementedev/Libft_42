#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>
#include <stdint.h>

int main ()
{
	printf("FAKE: %d\n", ft_atoi("\e475"));
	printf("TRUE: %d\n", atoi("\e475"));
}
