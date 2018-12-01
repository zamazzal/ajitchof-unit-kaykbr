#include "libunit.h"
#include <string.h>

int		basic_test_00(void)
{
	if (ft_strcmp("AB", "BA") != -1)
		return (-1);
	return (0);
}
