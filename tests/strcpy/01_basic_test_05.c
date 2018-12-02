#include "libunit.h"
#include <string.h>

int		basic_test_05(void)
{
	char	dest[8];

	dest = "XXX";
	if (strcmp((const char*)strcpy(dest, ""), (const char*)ft_strcpy(dest, "")))
		return (-1);
	return (0);
}
