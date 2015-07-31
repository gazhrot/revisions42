/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abruneau <abruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/29 11:55:11 by abruneau          #+#    #+#             */
/*   Updated: 2015/07/29 16:27:07 by abruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_rotone(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			j = 13;
		else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
			j = -13;
		else
			j = 0; 
		ft_putchar(str[i] + j);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	ft_putchar('\n');
	if (argc == 2)
		ft_rotone(argv[1]);
	ft_putchar('\n');
	return (0);
}
