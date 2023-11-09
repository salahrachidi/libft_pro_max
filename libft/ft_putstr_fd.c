/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:13:50 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/08 20:23:01 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// int	main(void)
// {
// 	int	fd;
// 	int	fds;

// 	fd = open("wa7ch.txt", O_CREAT | O_RDWR | O_APPEND, 0777 );
// 	fds = open("wa7chiwurtiewyt", O_CREAT | O_RDWR | O_APPEND, 0777 );
// 	printf(">>>>> %d\n", fd);
// 	printf(">>>>> %d\n", fds);
// 	ft_putstr_fd("ana m9awaaaaaaad", fd);
// }
