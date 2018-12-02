/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ilyass.sh@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 21:02:53 by ishaimou          #+#    #+#             */
/*   Updated: 2018/12/02 00:04:25 by ishaimou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "header.h"

int		strnstr_launcher(void)
{
	t_unit_test	*test;
	int			ret;

	test = NULL;
	print_endl("STRNSTR:\n");
	load_test(&test, "Basic test 01", &strnstr_basic1);
	load_test(&test, "Basic test 02", &strnstr_basic2);
	load_test(&test, "Basic test 03", &strnstr_basic3);
	load_test(&test, "Basic test 04", &strnstr_basic4);
	load_test(&test, "NULL test 01", &strnstr_null);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
