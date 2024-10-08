/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 22:24:05 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/08/17 22:49:54 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac == 2)
    {
        while (av[1][i])
            i++;
        i--;
        while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
            i--;
        while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
            i--;
        i++;
        while (av[1][i] && av[1][i] != ' ' && av[1][i] != ' ')
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}