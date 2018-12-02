/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ilyass.sh@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 00:27:41 by ishaimou          #+#    #+#             */
/*   Updated: 2018/12/02 17:24:37 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "header.h"

int		strdup_launcher(void)
{
	int			ret;
	t_unit_test	*test;

	test = NULL;
	print_endl("STRDUP:\n");
	load_test(&test, "Basic test 1", &strdup_basic1);
	load_test(&test, "Basic test 2", &strdup_basic2);
	load_test(&test, "Basic test 3", &strdup_basic3);
	load_test(&test, "Null test", &strdup_hard);
	load_test(&test, "Null test", &strdup_null);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
