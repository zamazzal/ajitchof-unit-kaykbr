#include "libunit.h"
#include <string.h>

int		null_test(void)
{
	char	dest[4];

	dest = "XXX";
	if (strcmp((const char*)ft_strcat(dest, NULL), (const char*)strcat(dest, NULL)))
		return (-1);	
	return (0);
}
