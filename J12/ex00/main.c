/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 05:41:25 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/19 07:23:38 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_display_file(char *str)
{
	int fd;
	char buf[4096];

	fd = open(str, O_RDONLY);
	if (fd == -1)
		return ;
	read(fd, buf, 4096);
	ft_putstr(buf);
	if (close(fd) == -1)
		return ;
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	else
	{
		ft_display_file(argv[1]);
		return (0);
	}
}
