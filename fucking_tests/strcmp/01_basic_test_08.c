#include "libunit.h"
#include <string.h>

int		basic_test_08(void)
{
	if (ft_strcmp("", "") != 0)
		return (-1);
	return (0);
}
