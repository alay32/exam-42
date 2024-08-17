/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:42:04 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/08/12 14:51:18 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
    char *dst;
    int i;

    i = 0;
    while (src[i])
        i++;
    dst = malloc(sizeof(char) * (i + 1));
    if (dst == NULL)
        return (NULL);
    i = 0;
    while (src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

int main()
{
    char *dst;
    dst = ft_strdup("hello");
    printf("%s", dst);
    return (0);
}