/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 23:54:11 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/08/18 23:54:13 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int countw(char *str)
{
    int i;
    int count;

    count = 0;
    i = 0;
    while (str[i])
    {
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        if (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            count++;
            while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
                i++;
        }
    }
    return (count);
}

int wordlen(int i, char *str)
{
    int count;

    count = 0;
    while (str[i])
    {
        if (str[i] != ' ')
            count++;
        if (str[i] == ' ' || str[i] == '\0')
            break;
        i++;
    }
    return (count);
}

char    **ft_split(char *str)
{
    char **split;
    int i;
    int ii;
    int j;
    int k;
    int x;

    i = 0;
    ii = 0;
    split = (char **)malloc(sizeof(char *) * (countw(str) + 1));
        if (!split)
            return (NULL);
    while (i < countw(str))
    {
        while (str[ii] == ' ')
            ii++;
        x = wordlen(ii,str);
        split[i] = (char *)malloc(sizeof(char) * (x + 1));
            if (!split[i])
                return(NULL);
        j = ii;
        k = 0;
        while (ii < x + j)
        {
            split[i][k] = str[ii];
            k++;
            ii++;
        }
        split[i][k] = '\0';
        i++;
    }
    split[i] = NULL;
    return (split);
}

// int main()
// {
//     char **str = ft_split("hello world my name is cha3non anas");
//     int i;

//     i = 0;
//     while(str[i])
//     {
//         printf("%s\n",str[i]);
//         i++;
//     }
//     return (0);
// }