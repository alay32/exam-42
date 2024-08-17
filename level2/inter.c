/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 22:29:19 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/08/17 13:11:01 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int i = 0;
	int j = 0;
	int tab[256] = {0};
	if(argc == 3)
	{
		while(argv[1][i])
		{	
			j = 0;
			while(argv[2][j])
			{
				if(argv[2][j] == argv[1][i])  
				{
	
					if(tab[(int)argv[1][i]] == 0)
					{
						tab[(int)argv[1][i]] = 1;
						write(1, &argv[2][j], 1);
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1,"\n",1);
    return (0);
}