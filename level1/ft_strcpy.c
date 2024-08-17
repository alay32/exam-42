/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 22:29:19 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/08/09 22:34:52 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str = NULL;
    char dst[] = "holaaa";
    str = malloc(sizeof(char *));
    str = ft_strcpy(str, dst);
    printf("%s", str);
    return (0);
}