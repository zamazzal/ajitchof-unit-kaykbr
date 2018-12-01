#include "libunit.h"
#include <string.h>

int		basic_test_02(void)
{
	if (ft_strcmp("ABCD", "FGH") != -5)
		return (-1);
	return (0);
}
