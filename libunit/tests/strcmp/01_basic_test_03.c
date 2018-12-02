#include "libunit.h"

int		basic_test_03(void)
{
	if (ft_strcmp("ABCD", "ABCC") != 1)
		return (-1);
	return (0);
}
