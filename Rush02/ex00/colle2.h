/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle2.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 07:55:31 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/21 23:38:25 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLLE2_H
# define COLLE2_H

# define BUF_SIZE 1024

# include <unistd.h>
# include <stdlib.h>

int		ft_parse_stdin(void);
void	ft_putnbr(int nbr);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_strdup(char *str);
void	ft_aff_tab(char **tab);
int		ft_algo_c00(char **tab, int im, int jm);
int		ft_algo_c01(char **tab, int im, int jm);
int		ft_algo_c02(char **tab, int im, int jm);
int		ft_algo_c03(char **tab, int im, int jm);
int		ft_algo_c04(char **tab, int im, int jm);
void	ft_aff(int nbcolle, int i, int j);
char	**ft_split_whitespaces(char *str);

#endif
