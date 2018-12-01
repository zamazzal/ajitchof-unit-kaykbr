#include "libunit.h"
#include <string.h>

int		null_test(void)
{
	if(strcmp((const char*)strcpy("XXX", NULL), (const char*)ft_strcpy("XXX", NULL))
		return (-1);
	else
		return (0);
}
