#include "libunit.h"
#include <string.h>

int		basic_test_03(void)
{
	char	dest[8];

	dest = "XX";
	if (strcmp((const char*)ft_strcat(dest, "00"), strcat(dest, "00")))
		return (-1);
	return (0);
}
