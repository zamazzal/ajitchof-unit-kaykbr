/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_isalnum_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ilyass.sh@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 21:31:07 by ishaimou          #+#    #+#             */
/*   Updated: 2018/12/01 22:02:44 by ishaimou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_isalnum.h"

int		isalnum_launcher(void)
{
	int				ret;
	t_unit_test		*test;

	test = NULL;
	print_endl("ISALNUM:\n");
	load_test(&test, "Basic test", &isalnum_basic1);
	ret = launch_tests(&test);
	clear_test(&test);
	return (ret);
}
