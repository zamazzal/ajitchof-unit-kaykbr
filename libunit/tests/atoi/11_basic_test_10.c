/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_base_test_00.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 20:11:23 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/01 20:11:26 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		atoi_basic11(void)
{
	if (ft_atoi("054854") != 54854)
		return (-1);
	return (0);
}