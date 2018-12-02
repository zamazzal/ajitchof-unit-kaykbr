/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ilyass.sh@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 00:19:05 by ishaimou          #+#    #+#             */
/*   Updated: 2018/12/02 00:27:12 by ishaimou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "header.h"

int		strcat_launcher(void)
{
	int			ret;
	t_unit_list	*test;

	test = NULL;
	load_test(&test, "Basic test 1", &basic_test00);
	load_test(&test, "Basic test 2", &basic_test01);
	load_test(&test, "Basic test 3", &basic_test02);
	load_test(&test, "Basic test 4", &basic_test03);
	load_test(&test, "Null test", &null_test);
	ret = launch_tests(&test);
	clear_test(&test);
	return (ret);
}
