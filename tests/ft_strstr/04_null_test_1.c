/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ilyass.sh@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 03:03:10 by ishaimou          #+#    #+#             */
/*   Updated: 2018/12/02 16:57:55 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strstr_null1(void)
{
	char	str[256];

	test_strcpy(str, "fuzzy wuzzy was a bear but wuzzy fuzzy was not a bear");
	if (test_strcmp(test_strstr(str, ""),
				ft_strstr(str, "")) != 0)
		return (-1);
	return (0);
}
