#include "libunit.h"
#include <string.h>

int		basic_test(void)
{
	if (strcmp((const char*)strcpy("XXX", "00"), (const char*)ft_strcpy("XXX", "00")))
		return (-1);
	return (0);
}
