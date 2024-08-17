/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repaet_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:01:36 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/08/10 17:23:21 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int count;

    i = 0;
    count = 0;
    if (ac == 2)
    {
        while(av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
                count = av[1][i] - 'a' + 1;
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                count = av[1][i] - 'A' + 1;
            else
                count = 1;
            while(count--)
                write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}