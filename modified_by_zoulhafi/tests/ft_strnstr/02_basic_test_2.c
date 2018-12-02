/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 03:40:37 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/01 21:10:56 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strnstr_basic2(void)
{
	if (test_strcmp(ft_strnstr("lorem ipsum dolor sit amet", "sit", 10), test_strnstr("lorem ipsum dolor sit amet", "sit", 10)))
		return (-1);
	return (0);
}
