/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   protos.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 02:32:06 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/21 05:43:39 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOS_H
# define PROTOS_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		eval_expr(char *str);
char	*ft_itoa(int nbr);
int		ft_atoi(char *str);
char	*ft_add(char *str, int first, int ope);
char	*ft_mul(char *str, int first, int ope);
char	*ft_mod(char *str, int first, int ope);
char	*ft_div(char *str, int first, int ope);
char	*ft_sub(char *str, int first, int ope);
char	*ft_replace(char *str, int ope, int first, int res);
char	*ft_find_priority(char *newstr, int first, int last);
char	*ft_removedoubleneg(char *str);

#endif
