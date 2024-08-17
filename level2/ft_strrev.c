/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:29:45 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/08/14 09:53:00 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strrev(char *str)
{
    int len;
    char tmp;
    int i;
    
    i = 0;
    len = 0;
    if (!str)
        return (NULL);
    while (str[len])
        len++;
    while (i < len / 2)
    {
        tmp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = tmp;
        i++;
    }
    return (str);
}

int main()
{
    char dst[]= "hola";
    
    printf("%s", ft_strrev(dst));
    return (0);
}