/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_world.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abruneau <abruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/28 15:08:53 by abruneau          #+#    #+#             */
/*   Updated: 2015/07/28 21:26:15 by abruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	ft_checkchar(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\v' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i])
	{
		if (str[i] == ' ')
			return (1);
		ft_putchar(str[i]);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc < 0)
	{
		ft_putchar('\n');
	}
	if (argc != 1)
	{
		ft_checkchar(argv[1]);
		return (0);
	}
}
