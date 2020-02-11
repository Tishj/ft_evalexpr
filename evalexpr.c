/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   evalexpr.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/09 18:50:22 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/11 14:07:51 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "evalexpr.h"

char	*ft_match_char(char match, char *input)
{
	if (!input || *input != match)
		return (NULL);
	return (input + 1);
}

char	*ft_int(int *value, char *input)
{
	if (!input)
		return (NULL);
	if (*input >= '0' && *input <= '9')
	{
		*value = *input - '0';
		return (input + 1);
	}
	return (NULL);
}

char	*ft_factor(int *value, char *input)
{
	int		x;
	int		y;
	char	*bracket;
	char	*num;
	char	*expr;

	if (!input)
		return (NULL);
	bracket = ft_match_char(')', ft_expr(value, ft_match_char('(', input)));
	if (bracket)
		return (bracket);
	num = ft_int(value, input);
	if (num)
		return (num);
	expr = ft_expr(value, input);
	if (expr)
		return (expr);
	return (NULL);
}

char	*ft_term(int *value, char *input)
{
	int		x;
	int		y;
	char	*mul;
	char	*div;
	char	*fac;

	if (!input)
		return (NULL);
	mul = ft_term(&y, ft_match_char('*', ft_factor(&x, input)));
	if (mul)
	{
		*value = x * y;
		return (mul);
	}
	div = ft_term(&y, ft_match_char('/', ft_factor(&x, input)));
	if (div)
	{
		*value = x / y;
		return (div);
	}
	fac = ft_factor(value, input);
	if (fac)
		return (fac);
	return (NULL);
}

char	*ft_expr(int *value, char *input)
{
	int		x;
	int		y;
	char	*add;
	char	*sub;
	char	*term;

	if (!input)
		return (NULL);
	add = ft_expr(&y, ft_match_char('+', ft_term(&x, input)));
	if (add)
	{
		*value = x + y;
		return (add);
	}
	sub = ft_expr(&y, ft_match_char('-', ft_term(&x, input)));
	if (sub)
	{
		*value = x - y;
		return (sub);
	}
	term = ft_term(value, input);
	if (term)
		return (term);
	return (NULL);
}

int		main(int argc, char **argv)
{
	int	ret;

	ret = 0;
	if (argc != 2)
		return (ft_error(ERR_ARG));
	ft_expr(&ret, argv[1]);
	printf("outcome: %d\n", ret);
	return (0);
}
