#include "libunit.h"
#include <ctype.h>

int		basic_test(void)
{
	int		c;

	c = -1;
	while (c < 150)
	{
		if (ft_isdigit(c) != isdigit(c))
			return (-1);
		c++;
	}
	return (0);
}
