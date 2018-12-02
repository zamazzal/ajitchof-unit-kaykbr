/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_isalnum_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ilyass.sh@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 21:31:07 by ishaimou          #+#    #+#             */
/*   Updated: 2018/12/02 08:00:23 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		isalnum_launcher(void)
{
	int				ret;
	t_unit_test		*test;

	test = NULL;
	print_endl("ISALNUM:\n");
	load_test(&test, "Basic test", &isalnum_basic1);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
