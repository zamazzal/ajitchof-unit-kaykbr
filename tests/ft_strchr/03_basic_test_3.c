/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 02:57:06 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/01 03:20:17 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strchr_basic3(void)
{
	if (test_strcmp(ft_strchr("efmwaurfas2384eRGDJSM,.", 'e'), test_strchr("efmwaurfas2384eRGDJSM,.", 'e')))
		return (-1);
	return (0);
}
