nclude "libunit.h"
#include <string.h>

int		basic_test_02(void)
{
	char	src[5];

	src = "000";
	if (strcmp((const char*)strcpy("XXX", src), (const char*)ft_strcpy("XXX", src)))
		return (-1);
	return (0);
}
