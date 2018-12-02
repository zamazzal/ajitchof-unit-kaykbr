/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 16:54:41 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/01 21:03:02 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncat_hard(void)
{
	char *dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (NULL);
	test_memset(dest, 'r', 6);
	if (test_strcmp(ft_strncat(dest, "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Suspendisse at neque in sapien efficitur malesuada. Etiam viverra faucibus nibh", 5), test_strncat(dest, "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Suspendisse at neque in sapien efficitur malesuada. Etiam viverra faucibus nibh", 5)))
		return (-1);
	return (0);
}
