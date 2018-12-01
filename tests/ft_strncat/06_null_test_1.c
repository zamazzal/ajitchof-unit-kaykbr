/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_null_test_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 20:50:57 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/01 21:13:29 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncat_null(void)
{
	char	*dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (NULL);
	test_memset(dest, 'r', 6);
	if (test_strcmp(ft_strncat(dest, "", 5), test_strncat(dest, "", 5)))
		return (-1);
	return (0);
}
