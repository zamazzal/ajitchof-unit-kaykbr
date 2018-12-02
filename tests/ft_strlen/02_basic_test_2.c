/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ilyass.sh@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 01:26:14 by ishaimou          #+#    #+#             */
/*   Updated: 2018/12/02 18:09:35 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strlen_basic2(void)
{
	if (ft_strlen("0123456789abcdefghijklmnopqrstuvwxyz") !=
			test_strlen("0123456789abcdefghijklmnopqrstuvwxyz"))
		return (-1);
	return (0);
}
