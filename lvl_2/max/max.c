/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abruneau <abruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 13:31:55 by abruneau          #+#    #+#             */
/*   Updated: 2015/07/30 14:53:58 by abruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0) 
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		max(int* tab, unsigned int len)
{
	int i;

	i = 0;
	while (tab[i] < len)
	{
		i++;
	}
	if (tab[i] == 0)
	{
		return (0);
	}
	return (i);
}

int		main()
{
	int tab[] = {1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0};
	unsigned int len;

	printf("%d\n", max(tab, len));
	return (0);
}
