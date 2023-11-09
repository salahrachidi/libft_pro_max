/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:26:12 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/09 09:46:53 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	i = 0;
	substring = (char *)malloc((len * sizeof(char)) + 1);
	if (!substring)
		return (NULL);
	while (s[start] && i < len)
	{
		substring[i] = s[start];
		start++;
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

// int	main(void)
// {
// 	char	*test = "skafandri";
// 	char	*res = ft_substr(test, 3, 6);
// 	printf("the substring is : %s", res);
// }