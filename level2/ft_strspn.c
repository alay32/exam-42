/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:49:55 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/08/16 22:23:55 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s[i])
    {
        j = 0;
        while (accept[j])
        {
            if (s[i]==accept[j])
                break;
            j++;
        }
        if (!accept[j])
            return (i);
        i++;
    }
    return (i);
}

int main()
{
    size_t dst;
    size_t src;
    
    dst = ft_strspn("xyz abc", "abc");
    src = strspn("xyz abc", "abc");
    printf("%zu\n", dst);
    printf("%zu", src);
    return (0);
}

