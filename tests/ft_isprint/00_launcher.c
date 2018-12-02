/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ilyass.sh@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 00:09:53 by ishaimou          #+#    #+#             */
/*   Updated: 2018/12/02 08:01:13 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "header.h"

int		isprint_launcher(void)
{
	int			ret;
	t_unit_test	*test;

	test = NULL;
	print_endl("ISPRINT:\n");
	load_test(&test, "Basic test", &isprint_basic1);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
