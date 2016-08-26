/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 07:02:21 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/17 10:53:18 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H

# include <unistd.h>

void			ft_putchara(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nbr);
int				ft_strlen(char *str);
int				ft_atoi(char *str);
int				ft_add(int nb1, int nb2);
int				ft_mul(int nb1, int nb2);
int				ft_sub(int nb1, int nb2);
int				ft_div(int nb1, int nb2);
int				ft_mod(int nb1, int nb2);
int				ft_usage(int nbr, int nbr2);

typedef struct	s_opp
{
	char	*op;
	int		(*calculs)(int nb1, int nb2);
}				t_opp;

#endif
