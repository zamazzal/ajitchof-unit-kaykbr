#include "libunit.h"
#include <string.h>

int		basic_test_07(void)
{
	if (ft_strcmp("", "AB") != -65)
		return (-1);
	return (0);
}
