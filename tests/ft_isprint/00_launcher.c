/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ilyass.sh@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 00:09:53 by ishaimou          #+#    #+#             */
/*   Updated: 2018/12/02 00:18:29 by ishaimou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "header.h"

int		isprint_launcher(void)
{
	int			ret;
	t_unit_list	*test;

	test = NULL;
	test_load(&test, "Basic test", &basic_test);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
