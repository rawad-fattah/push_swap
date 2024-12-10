/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabdel-f <rabdel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:49:54 by rabdel-f          #+#    #+#             */
/*   Updated: 2024/08/19 11:43:46 by rabdel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// void	ft_printstack(t_stack *a)
// {
// 	while (a)
// 	{
// 		printf("%3ld", a->nbr);
// 		a = a->next;
// 	}
// }

int	main(int argc, char **argv)
{
	t_stack	*a;

	if (argc == 1)
		return (1);
	a = ft_process(argc, argv);
	if (!a || ft_checkdup(a))
	{
		ft_free(&a);
		ft_error();
	}
	if (!ft_checksorted(a))
		ft_sort(&a);
	ft_free(&a);
	return (0);
}
