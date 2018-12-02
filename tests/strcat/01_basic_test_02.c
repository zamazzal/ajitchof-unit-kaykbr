#include "libunit.h"
#include <string.h>

int		basic_test_02(void)
{
	if (strcmp((const char*)ft_strcat("XXX", "00"), (const char*)strcat("XXX", "00")))
		return (-1);
	return (0);
}
