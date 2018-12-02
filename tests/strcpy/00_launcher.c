/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ilyass.sh@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 00:51:21 by ishaimou          #+#    #+#             */
/*   Updated: 2018/12/02 01:00:25 by ishaimou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "header.h"

int		strcpy_launcher(void)
{
	int			ret;
	t_unit_list	*test;

	test = NULL;
	load_test(&test, "Basic test 1", &basic_test_00);
	load_test(&test, "Basic test 2", &basic_test_01);
	load_test(&test, "Basic test 3", &basic_test_02);
	load_test(&test, "Basic test 4", &basic_test_03);
	load_test(&test, "Basic test 5", &basic_test_04);
	load_test(&test, "Basic test 6", &basic_test_05);
	load_test(&test, "Null test", &null_test);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
