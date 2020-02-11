/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/14 18:10:42 by tbruinem       #+#    #+#                */
/*   Updated: 2019/10/14 18:10:42 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		add(int sum, int nb)
{
	sum = sum + nb;
	return (sum);
}

int		sub(int sum, int nb)
{
	sum = sum - nb;
	return (sum);
}

int		divide(int sum, int nb)
{
	sum = sum / nb;
	return (sum);
}

int		mod(int sum, int nb)
{
	sum = sum % nb;
	return (sum);
}

int		mul(int sum, int nb)
{
	sum = sum * nb;
	return (sum);
}

int	statemachine(char input, int sum, int nb)
{
	if (input == '+')
		return (add(sum, nb));
	else if (input == '-')
		return (sub(sum, nb));
	else if (input == '*')
		return (mul(sum, nb));
	else if (input == '/')
		return (divide(sum, nb));
	else if (input == '%')
		return (mod(sum, nb));
}

int	ft_sum(char op, char *str, int i, int nb)
{
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	while (str[i] == ' ')
		i++;
	printf("my current nb is %d and the current character I'm on is %c\n", nb, str[i]);
	if op == '+' || op == '-')
	{
		if (str[i] == '+' || str[i] == '-')
			return (statemachine(str[i], nb, (ft_sum(str, i + 2, 0))));
		else



	}
		return (statemachine(str[i], nb, (ft_sum(str[i], str, i + 2, 0))));
	else
		return (nb);

}

int		eval_expr(char *str)
{
	int res;

	res = 0;
	return (res);
}


int		main(void)
{
	char str[] = "5 + 4 * 3 + 2";
	int result;

	result = ft_sum('+', str, 0, 0);
	printf("%d\n", result);
	return (0);
}