/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ilyass.sh@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 21:54:42 by ishaimou          #+#    #+#             */
/*   Updated: 2018/12/01 22:08:27 by ishaimou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_isascii.h"

int		isascii_launcher(void)
{
	int			ret;
	t_unit_test	*test;

	test = NULL;
	print_endl("ISASCII:\n");
	load_test(&test, "Basic test", &isascii_basic1);
	ret = launch_tests(&test);
	clear_test(&test);
	return(ret);
}	
