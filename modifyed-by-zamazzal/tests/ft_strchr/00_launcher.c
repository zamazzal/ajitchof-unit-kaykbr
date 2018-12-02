/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ilyass.sh@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 00:27:41 by ishaimou          #+#    #+#             */
/*   Updated: 2018/12/02 00:38:41 by ishaimou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "header.h"

int		strchr_launcher(void)
{
	int			ret;
	t_unit_list	*test;

	test = NULL;
	print_endl("STRCHR:\n");
	load_test(&test, "Basic test 1", &strchr_basic1);
	load_test(&test, "Basic test 2", &strchr_basic2);
	load_test(&test, "Basic test 3", &strchr_basic3);
	load_test(&test, "Basic test 4", &strchr_basic4);
	load_test(&test, "Null test", &strchr_null);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
