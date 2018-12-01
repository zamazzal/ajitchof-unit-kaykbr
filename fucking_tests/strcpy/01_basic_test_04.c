#include "libunit.h"
#include <string.h>

int		basic_test_04(void)
{
	if (strcmp((const char*)strcpy("\0", "\0"), (const char*)ft_strcpy("\0", "\0")))
		return (-1);
	return (0);
}
