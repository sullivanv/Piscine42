/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 07:39:06 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/10 05:14:50 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int i2;
	unsigned int j2;

	i = 0;
	j = 0;
	j2 = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	i2 = i;
	while (src[j2] && j2 < size && i2 + 1 < size)
	{
		dest[i2] = src[j2];
		i2++;
		j2++;
	}
	dest[i2] = '\0';
	if (j + size < j + i)
		return (j + size);
	else
		return (j + i);
}
