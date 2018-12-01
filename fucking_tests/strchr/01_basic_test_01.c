#include "libunit.h"
#include <string.h>

int		basic_test(void)
{
	char	*s;

	s = strdup("hello it's me i live for for there i look at you");
	if (strcmp((const char*)ft_strchr(s, 'b'), (const char*)strchr(s, 'b')))
	{
		free(s);
		return (-1);
	}
	if (strcmp((const char*)ft_strchr(s, -2), (const char*)strchr(s, -2)))
	{
		free(s);
		return (-1);
	}
	free(s);
	return (0);
}
