/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_op.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/09 18:47:40 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/09 19:28:05 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "evalexpr.h"

int		ft_add(int x, int y)
{
	x = x + y;
	return (x);
}

int		ft_sub(int x, int y)
{
	x = x - y;
	return (x);
}

int		ft_div(int x, int y)
{
	x = x / y;
	return (x);
}

int		ft_mod(int x, int y)
{
	x = x % y;
	return (x);
}

int		ft_mul(int x, int y)
{
	x = x * y;
	return (x);
}
