/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 22:29:19 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/08/21 21:55:17 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

// int main(int argc, char **argv)
// {
//     int i = 0;
// 	int j = 0;
// 	int tab[256] = {0};
// 	if(argc == 3)
// 	{
// 		while(argv[1][i])
// 		{	
// 			j = 0;
// 			while(argv[2][j])
// 			{
// 				if(argv[2][j] == argv[1][i])  
// 				{
	
// 					if(tab[(int)argv[1][i]] == 0)
// 					{
// 						tab[(int)argv[1][i]] = 1;
// 						write(1, &argv[2][j], 1);
// 					}
// 				}
// 				j++;
// 			}
// 			i++;
// 		}
// 	}
// 	write(1,"\n",1);
//     return (0);
// }

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		int j;
		int found;
		while (av[1][i])
		{
			j = 0;
			found = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					found = 1;
					break;
				}
				j++;
			}
			if (found == 1)
			{
				j = 0;
				while (j < i)
				{
					if (av[1][i] == av[1][j])
					{
						found = 0;
						break;
					}
					j++;
				}
				if (found == 1)
					write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}