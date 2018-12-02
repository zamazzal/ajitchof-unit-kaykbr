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

int		strncmp_launcher(void)
{
	t_unit_test	*test;
	int			ret;

	test = NULL;
	print_endl("STRNCMP:\n");
	load_test(&test, "Basic test 01", &strncmp_basic1);
	load_test(&test, "Basic test 02", &strncmp_basic2);
	load_test(&test, "Basic test 03", &strncmp_basic3);
	load_test(&test, "Basic test 04", &strncmp_basic4);
	load_test(&test, "Hard test 01", &strncmp_hard);
	load_test(&test, "NULL test 01", &strncmp_null1);
	load_test(&test, "NULL test 02", &strncmp_null2);
	load_test(&test, "NULL test 03", &strncmp_null3);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
