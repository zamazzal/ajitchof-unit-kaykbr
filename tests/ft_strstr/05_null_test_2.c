/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ilyass.sh@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 03:03:10 by ishaimou          #+#    #+#             */
/*   Updated: 2018/12/01 03:37:29 by ishaimou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strstr_null2(void)
{
	if (test_strcmp(ft_strstr("", "fuzzy"), test_strstr("", "fuzzy")))
		return (-1);
	return (0);
}
