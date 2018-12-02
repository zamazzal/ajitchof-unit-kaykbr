/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ilyass.sh@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 22:38:05 by ishaimou          #+#    #+#             */
/*   Updated: 2018/12/02 08:03:43 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		isdigit_launcher(void)
{
	int			ret;
	t_unit_test	*test;

	test = NULL;
	print_endl("ISDIGIT:\n");
	load_test(&test, "Basic test", &isdigit_basic1);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
