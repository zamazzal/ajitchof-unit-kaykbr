#include "libunit.h"
#include <string.h>

int		null_test(void)
{
	char	*s;

	s = strdup("hello it's me i live for for there i look at you");
	if (strcmp((const char*)ft_strchr(s, '\0'), (const char*)strchr(s, '\0')))
	{
		free(s);
		return (-1);
	}
	if (strcmp((const char*)ft_strchr("", 'b'), (const char*)strchr("", 'b')))
	{
		free(s);
		return (-1);
	}
	free(s);
	return (0);
}
