/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ilyass.sh@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 22:38:05 by ishaimou          #+#    #+#             */
/*   Updated: 2018/12/01 22:53:12 by ishaimou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_isdigit.h"

int		isdigit_launcher(void)
{
	int			ret;
	t_unit_list	*test;

	test = NUll;
	load_test(&test, "Basic test", &isdigit_basic1);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
