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

int		toupper_launcher(void)
{
	t_unit_test	*test;
	int			ret;

	test = NULL;
	print_endl("TOUPPER:\n");
	load_test(&test, "Basic test 01", &toupper_basic);
	load_test(&test, "NULL test 01", &toupper_null);
	ret = launch_tests(&list);
	clean_test(&test);
	return (ret);
}
