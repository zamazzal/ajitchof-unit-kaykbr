#include "libunit.h"
#include <string.h>

int		basic_test(void)
{
	char	*s;

	s = strdup("hello it's me i live for for there i look at you");
	if (strcmp((const char*)ft_strchr(s, 'o'), (const char*)strchr(s, 'o')))
	{
		free(s);
		return (-1);
	}
	if (strcmp((const char*)ft_strchr(s, ' '), (const char*)strchr(s, ' ')))
	{
		free(s);
		return (-1);
	}
	if (strcmp((const char*)ft_strchr(s, 'l'), (const char*)strchr(s, 'l')))
	{
		free(s);
		return (-1);
	}
	free(s);
	return (0);
}
