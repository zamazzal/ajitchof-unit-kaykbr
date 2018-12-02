#include "libunit.h"

int		basic_test_04(void)
{
	if (ft_strcmp("ABCD", "ABCDF") != -70)
		return (-1);
	return (0);
}
