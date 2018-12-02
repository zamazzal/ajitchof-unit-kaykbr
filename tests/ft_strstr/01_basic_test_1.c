/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ilyass.sh@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 02:50:36 by ishaimou          #+#    #+#             */
/*   Updated: 2018/12/02 17:55:09 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strstr_basic1(void)
{
	char	str[256];

	test_strcpy(str, "fuzzy wuzzy was a bear but wuzzy fuzzy was not a bear");
	if (test_strcmp(ft_strstr(str, "but"), test_strstr(str, "but")))
		return (-1);
	return (0);
}
