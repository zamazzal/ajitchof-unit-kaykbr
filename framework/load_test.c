/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ilyass.sh@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 16:19:44 by ishaimou          #+#    #+#             */
/*   Updated: 2018/12/02 16:22:55 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

t_unit_test		*new_node(char *name, int (*test)(void))
{
	t_unit_test		*test_list;

	test_list = NULL;
	if ((test_list = (t_unit_test*)malloc(sizeof(t_unit_test))) != NULL)
	{
		test_list->name = name;
		test_list->test_fct = test;
		test_list->next = NULL;
	}
	return (test_list);
}

void			load_test(t_unit_test **test_list, char *name, int (*test)(void))
{
	t_unit_test	*tmp;

	if (!test_list || !test)
		return ;
	if (*test_list == NULL)
		*test_list = new_node(name, test);
	else
	{
		tmp = *test_list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_node(name, test);
	}
}
