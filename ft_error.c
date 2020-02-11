/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_error.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/09 18:51:57 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/09 18:53:25 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "evalexpr.h"

int		ft_error(char *errstr)
{
	write(STDERR_FILENO, errstr, ft_strlen(errstr));
	exit(1);
}
