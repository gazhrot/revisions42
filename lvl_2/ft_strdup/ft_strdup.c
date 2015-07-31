/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abruneau <abruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/29 17:58:14 by abruneau          #+#    #+#             */
/*   Updated: 2015/07/29 19:27:52 by abruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *s1)
{
	char	*lel;

	lel = NULL;
	lel = (char*)malloc(sizeof(s1) * (*s1 + 1));
	if (!lel)
	{
		return (0);
	}
	else if (s1)
	{
		lel = s1;
	}
	return (lel);
	free(lel);
	lel = NULL;
}

int		main()
{
	char dst[15] = "ahahahah";
	char src[15] = "helelele";
	printf("%s\n", ft_strdup(src));
}
