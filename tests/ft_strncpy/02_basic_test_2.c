/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 03:40:37 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/02 17:50:48 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncpy_basic2(void)
{
	char	*dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * 50)))
		return (0);
	test_memset(dest, 'c', 50);
	if (test_strcmp(ft_strncpy(dest, "lorem ipsum dolor sit amet", 30),
				test_strncpy(dest, "lorem ipsum dolor sit amet", 30)))
	{
		free(dest);
		return (-1);
	}
	free(dest);
	return (0);
}
