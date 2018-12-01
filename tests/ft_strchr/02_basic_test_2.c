/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 02:55:42 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/01 03:20:24 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strchr_basic2(void)
{
	if (test_strcmp(ft_strchr("efmwaurfas2384RGDJSM,.", '.'), test_strchr("efmwaurfas2384RGDJSM,.", '.')))
		return (-1);
	return (0);
}
