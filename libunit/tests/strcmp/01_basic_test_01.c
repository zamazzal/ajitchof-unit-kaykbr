#include "libunit.h"

int		basic_test_01(void)
{
	char	s1[5];

	s1 = "ABCD";
	if (ft_strcmp(s1, s1) == 0)
		return (-1);
	return (0);
}
