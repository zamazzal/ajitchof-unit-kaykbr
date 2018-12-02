/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ilyass.sh@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 02:50:36 by ishaimou          #+#    #+#             */
/*   Updated: 2018/12/01 21:05:36 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strstr_basic2(void)
{
	if (test_strcmp(ft_strstr("fuzzy wuzzy was a bear but wuzzy fuzzy was not a bear", "zy"), test_strstr("fuzzy wuzzy was a bear but wuzzy fuzzy was not a bear", "zy")))
		return (-1);
	return (0);
}
