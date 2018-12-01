#include "libunit.h"
#include <string.h>

int		basic_test_01(void)
{
	char	dest[5];

	dest = "XXX";
	if (strcmp((const char*)ft_strcat(dest, "00"), (const char*)strcat(dest, "00")))
		return (-1);
	return (0);
}
