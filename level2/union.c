/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 23:28:18 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/08/21 21:54:34 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// int main(int ac, char **av)
// {
//     if (ac == 3)
//     {
//         unsigned char seen[256] = {0};
//         int i = 0;
//         int j = 0;

//         while (av[1][i])
//         {
//             if (!seen[(unsigned char)av[1][i]])
//             {
//                 write(1, &av[1][i], 1);
//                 seen[(unsigned char)av[1][i]] = 1;
//             }
//             i++;
//         }
//         while (av[2][j])
//         {
//             if (!seen[(unsigned char)av[2][j]])
//             {
//                 write(1, &av[2][j], 1);
//                 seen[(unsigned char)av[2][j]] = 1;
//             }
//             j++;
//         }
//     }
//     write(1, "\n", 1);
//     return 0;
// }

#include <unistd.h>

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
            while (j < i)
            {
                if (av[1][i] == av[1][j])
                {
                    found = 1;
                    break;
                }
                j++;
            }
            if (found == 0)
            {
                write(1, &av[1][i], 1);
            }
            i++;
        }
        i = 0;
        while (av[2][i])
        {
            j = 0;
            found = 0;
            while (j < i)
            {
                if (av[2][i] == av[2][j])
                {
                    found = 1;
                    break;
                }
                j++;
            }
            if (found == 0)
            {
                j = 0;
                while (av[1][j])
                {
                    if (av[1][j] == av[2][i])
                    {
                        found = 1;
                        break;
                    }
                    j++;
                }
            }
            if (found == 0)
                write(1, &av[2][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}