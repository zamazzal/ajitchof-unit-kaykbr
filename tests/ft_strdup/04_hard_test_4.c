/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_base_test_00.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 20:11:23 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/01 20:55:24 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strdup_hard(void)
{
	if (test_strcmp(ft_strdup("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam porta tortor eget velit cursus imperdiet. Nunc at nibh sodales, convallis eros sed, vestibulum purus. Phasellus eget nulla enim. Ut placerat risus ac porttitor consectetur"), test_strdup("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam porta tortor eget velit cursus imperdiet. Nunc at nibh sodales, convallis eros sed, vestibulum purus. Phasellus eget nulla enim. Ut placerat risus ac porttitor consectetur")))
		return (-1);
	return (0);
}
