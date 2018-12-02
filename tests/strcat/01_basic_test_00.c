#include "libunit.h"
#include <string.h>

int		basic_test_00(void)
{
	char	dest[5];

	dest = "XXX";
	if (strcmp(ft_strcat(dest, ""), strcat(dest, "")))
		return (-1);
	return (0);
}
