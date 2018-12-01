/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozaazaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 21:02:53 by ozaazaa           #+#    #+#             */
/*   Updated: 2018/12/02 00:10:41 by ozaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunt.h"

static char	*get_result(int status)
{
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
			return ("\033[32mOK\033[0m");
	}
	else
		if (WTERMSIG(status) == SIGSEGV)
			return ("\033[31mSIGV\033[0m");
		else if (WTERMSIG(status) == SIGBUS)
			return ("\033[31mBUSE\033[0m");
	return ("\033[31mKO\033[0m");
}

static void child(t_unit_test **test)
{
	int	return_value;

	return_value = (*test)->test_function();
	exit(return_value);
}

static void	parent(char *name, int *success)
{
	int	status;

	status = 0;
	wait(&status);
	if (WIFEXITED(status) && WEXITSTATUS(status) == 0)
		*success += 1;
	printf("> %s : [%s]\n", name, get_result(status));
}

int	launch(t_unit_test **list)
{
	int	success;
	int	counter;
	int	pid;

	success = 0;
	counter = 0;
	while (*list)
	{
		pid = fork();
		if (pid < 0)
			printf("failed to launch test\n");
		else if (pid == 0)
			child(list);
		else if (pid > 0)
			parent((*list)->name, &success);
		*list = (*list)->next;
		counter++;
	}
	printf("\n successfull test %d/ total test %d tests checked\n", success, counter);
	return ((counter == success) ? 0 : 1);
}
