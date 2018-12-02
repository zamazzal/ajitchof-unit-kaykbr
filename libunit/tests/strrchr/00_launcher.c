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

int		strrchr_launcher(void)
{
	t_unit_test	*test;
	int			ret;

	test = NULL;
	print_endl("STRRCHR:\n");
	load_test(&test, "Basic test 01", &strrchr_basic1);
	load_test(&test, "Basic test 02", &strrchr_basic2);
	load_test(&test, "Basic test 03", &strrchr_basic3);
	load_test(&test, "Basic test 04", &strrchr_basic4);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
