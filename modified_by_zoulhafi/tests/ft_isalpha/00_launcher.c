/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ilyass.sh@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 21:45:31 by ishaimou          #+#    #+#             */
/*   Updated: 2018/12/02 08:02:10 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		isalpha_launcher(void)
{
	int			ret;
	t_unit_test	*test;

	test = NULL;
	print_endl("ISALPHA:\n");
	load_test(&test, "Basic test", &isalpha_basic1);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
