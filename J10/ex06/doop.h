/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 07:02:21 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/17 08:08:43 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H

# include <unistd.h>

void	ft_putchara(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_add(int nb1, int nb2);
int		ft_mult(int nb1, int nb2);
int		ft_sous(int nb1, int nb2);
int		ft_div(int nb1, int nb2);
int		ft_mod(int nb1, int nb2);
int		ft_0(int nbr, int nbr2);

#endif
