/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abruneau <abruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/29 18:21:52 by abruneau          #+#    #+#             */
/*   Updated: 2015/07/29 18:55:14 by abruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{

	while (*s1 == *s2)
	{
		if (!(*s1++ + *s2++))
			return (0);
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

int		main()
{
	char *s1;
	char *s2;

	printf("%d\n", ft_strcmp("ab", "ab"));
	printf("%d\n", ft_strcmp("ac", "ab"));
	printf("%d\n", ft_strcmp("ba", "ab"));
	return (0);
}
