/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 03:40:37 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/02 17:03:01 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strnstr_basic3(void)
{
	if (ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0) != NULL)
		return (-1);
	return (0);
}
