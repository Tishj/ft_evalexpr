/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/09 18:53:29 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/09 18:54:12 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "evalexpr.h"

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
