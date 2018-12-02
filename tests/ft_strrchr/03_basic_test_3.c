/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 02:57:06 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/02 17:55:26 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strrchr_basic3(void)
{
	if (test_strcmp(ft_strrchr("efmwaurfas2384eRGDJSM,.", 'e'),
				test_strrchr("efmwaurfas2384eRGDJSM,.", 'e')))
		return (-1);
	return (0);
}
