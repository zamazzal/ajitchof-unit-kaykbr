/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_base_test_00.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 20:11:23 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/01 21:12:32 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncmp_null2(void)
{
	if (ft_strncmp("asasfeqtrwdfjbcxaEWTERUG", "", 15) != test_strncmp("asasfeqtrwdfjbcxaEWTERUG", "", 15))
		return (-1);
	return (0);
}
