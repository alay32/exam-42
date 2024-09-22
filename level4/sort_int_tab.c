/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 18:08:42 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/08/23 18:27:46 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    int tmp;
    unsigned int j = 1;
    while (i < size && j < size)
    {
        if (tab[0] > tab[1])
        {
            tmp = tab[0];
            tab[0] = tab[1];
            tab[1]
        }
        if (tab[i] < tab[j])
        {
            tmp = tab[i];
            tab[i] = tab[j];
            tab[j]= tmp;
            i = 0;
            j = -1;
        }
        i++;
        j++;
    }
}