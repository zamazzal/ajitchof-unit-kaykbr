/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_base_test_00.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 20:11:23 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/02 18:12:58 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strdup_basic1(void)
{
	if (test_strcmp(ft_strdup("Lorem ipsum dolor sit amet"),
				"Lorem ipsum dolor sit amet"))
		return (-1);
	return (0);
}
