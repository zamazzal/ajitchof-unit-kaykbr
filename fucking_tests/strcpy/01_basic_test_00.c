#include "libunit.h"
#include <string.h>

int		basic_test_00(void)
{
	char	dest[4];

	dest = "XXX";
	if(strcmp((const char*)strcpy(dest, ""), (const char*)ft_strcpy(dest, "")))
		return (-1);
	return (0);
}
