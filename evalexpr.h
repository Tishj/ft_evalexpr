/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   evalexpr.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/09 18:49:31 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/11 13:28:23 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVALEXPR_H
# define EVALEXPR_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef int	(*t_opf)(char *input);

# define ERR_ARG "Please supply (only) one argument.\n"

int		ft_strlen(char *str);
int		ft_error(char *errstr);
char	*ft_match_char(char match, char *input);
char	*ft_expr(int *value, char *input);
char	*ft_term(int *value, char *input);
char	*ft_int(int *value, char *input);
char	*ft_factor(int *value, char *input);

#endif
