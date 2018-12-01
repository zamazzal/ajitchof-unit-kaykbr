/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ilyass.sh@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 16:19:44 by ishaimou          #+#    #+#             */
/*   Updated: 2018/12/01 22:23:07 by ishaimou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

t_unit_test	*new_node(char *name, int (*test)(void))
{
	t_unit_list		*test_list;
	
	test_list = NULL;
	if ((test_list = (t_unit_list*)malloc(sizeof(t_unit_list))) != NULL)
	{
		test_list->name = name;
		test_list->test_fct = test;
		test_list->next = NULL;
	}
	return (test_list);
}

void	load_test(t_unit_list **test_list, char *name, int (*test)(void))
{
	t_unit_test	*tmp;
	
	if (!test_list || !test)
		return (NULL);
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
