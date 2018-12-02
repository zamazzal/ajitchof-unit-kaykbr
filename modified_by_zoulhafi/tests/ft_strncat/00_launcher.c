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

int		strncat_launcher(void)
{
	t_unit_test	*test;
	int			ret;

	test = NULL;
	print_endl("STRNCAT:\n");
	load_test(&test, "Basic test 01", &strncat_basic1);
	load_test(&test, "Basic test 02", &strncat_basic2);
	load_test(&test, "Basic test 03", &strncat_basic3);
	load_test(&test, "Basic test 04", &strncat_basic4);
	load_test(&test, "Null test 01", &strlen_null);
	load_test(&test, "Hard test 01", &strncat_hard);
	ret = launch_tests(&list);
	clean_test(&test);
	return (ret);
}
