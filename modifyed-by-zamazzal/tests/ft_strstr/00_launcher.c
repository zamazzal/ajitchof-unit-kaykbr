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

int		strstr_launcher(void)
{
	t_unit_test	*test;
	int			ret;

	test = NULL;
	print_endl("STRSTR:\n");
	load_test(&test, "Basic test 01", &strstr_basic1);
	load_test(&test, "Basic test 02", &strstr_basic2);
	load_test(&test, "Basic test 03", &strstr_basic3);
	load_test(&test, "NULL test 01", &strstr_null1);
	load_test(&test, "NULL test 02", &strstr_null2);
	load_test(&test, "NULL test 03", &strstr_null3);
	ret = launch_tests(&list);
	clean_test(&test);
	return (ret);
}
