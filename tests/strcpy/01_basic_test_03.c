#include "libunit.h"
#include <string.h>

int		basic_test(void)
{
	char	src1[5];
	char	dest[4];
	char	dest1[2];

	dest = "XXX";
	src1 = "000";
	if (strcmp((const char*)strcpy(dest1, src1), (const char*)ft_strcpy(dest1, src1)))
		return (-1);
	return (0);
}
