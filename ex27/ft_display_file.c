/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 19:49:12 by akrushin          #+#    #+#             */
/*   Updated: 2018/02/21 19:49:14 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	print(int i);

int		main(int argc, char **argv)
{
	int	i;

	if (argc != 2)
	{
		if (argc > 2)
			write(2, "Too many arguments.\n", 20);
		if (argc < 2)
			write(2, "File name missing.\n", 20);
		return (1);
	}
	i = open(argv[1], O_RDONLY);
	print(i);
	close(i);
	return (0);
}

void	print(int i)
{
	char	c;

	while (read(i, &c, 1) != 0)
		write(1, &c, 1);
}
