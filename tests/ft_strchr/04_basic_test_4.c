/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 02:58:27 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/02 17:29:54 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strchr_basic4(void)
{
	if (ft_strchr("efmwaurfas2384RGDJSM,.", 'x') != NULL)
		return (-1);
	return (0);
}
