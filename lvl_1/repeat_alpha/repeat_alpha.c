/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abruneau <abruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/29 15:26:19 by abruneau          #+#    #+#             */
/*   Updated: 2015/07/29 17:38:25 by abruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	repeat_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		printf("%d\n", str[i]);
		printf("%d\n", str[i] - 'a' + 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	repeat_alpha("e");
}
