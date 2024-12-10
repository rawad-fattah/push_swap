/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabdel-f <rabdel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:05:17 by rabdel-f          #+#    #+#             */
/*   Updated: 2024/08/17 09:41:12 by rabdel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_atoi2(const char *str, int *flag)
{
	int				mod;
	long long int	i;

	i = 0;
	mod = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if ((*str == '-' || *str == '+') && ft_strlen(str) == 1)
	{
		*flag = 1;
	}
	if (*str == '-')
		mod = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			*flag = 1;
		i = i * 10 + (*str - '0');
		str++;
	}
	if ((mod * i) > 2147483647 || (mod * i) < -2147483648)
		*flag = 1;
	return (mod * i);
}

t_stack	*quoted_argument(char **argv)
{
	t_stack	*a;
	char	**tmp;
	int		i;
	int		j;
	int		flag;

	flag = 0;
	a = NULL;
	i = 0;
	tmp = ft_split(argv[1], 32);
	while (tmp[i])
	{
		j = ft_atoi2(tmp[i], &flag);
		if (flag)
		{
			ft_free(&a);
			break ;
		}
		ft_add_back(&a, ft_stack_new(j));
		i++;
	}
	ft_freestr(tmp);
	free(tmp);
	return (a);
}

t_stack	*ft_process(int argc, char **argv)
{
	t_stack	*a;
	int		i;
	int		j;
	int		flag;

	flag = 0;
	i = 1;
	a = NULL;
	if (argc == 2)
		a = quoted_argument(argv);
	else
	{
		while (i < argc)
		{
			j = ft_atoi2(argv[i], &flag);
			if (flag)
			{
				ft_free(&a);
				break ;
			}
			ft_add_back(&a, ft_stack_new(j));
			i++;
		}
	}
	return (a);
}
