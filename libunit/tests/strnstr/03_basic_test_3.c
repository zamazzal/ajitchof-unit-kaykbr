/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 03:40:37 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/01 21:10:44 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strnstr_basic3(void)
{
	if (test_strcmp(ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0), test_strnstr("lorem ipsum dolor sit amet", "dolor", 0)))
		return (-1);
	return (0);
}
