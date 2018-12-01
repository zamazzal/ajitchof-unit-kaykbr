/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ilyass.sh@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 17:55:34 by ishaimou          #+#    #+#             */
/*   Updated: 2018/12/01 22:23:06 by ishaimou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	clean_test(t_unit_test **test_list)
{
	t_unit_test	*tmp1;
	t_unit_test	*tmp2;

	if (!test_list || !(*test_list))
		return ;
	tmp2 = *test_list;
	while(tmp1 = tmp2)
	{
		tmp2 = tmp1->next;
		free(tmp1);
		tmp1 = NULL;
	}
	*test_list = NULL;
}
