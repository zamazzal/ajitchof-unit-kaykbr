/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ilyass.sh@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 21:45:31 by ishaimou          #+#    #+#             */
/*   Updated: 2018/12/01 22:03:15 by ishaimou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_isalpha.h"

int		isalpha_launcher(void)
{
	int			ret;
	t_unit_list	*list;

	list = NULL;
	print_endl("ISALPHA:\n");
	load_test(&test, "Basic test", &isalpha_basic1);
	ret = launch_tests(&test);
	clear_test(&test);
	return (ret);
}
