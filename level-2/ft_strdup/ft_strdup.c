#include <stdlib.h>

char *ft_strdup(char *src)
{
	char *str;
	int i = 0;

	while (src[i])
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
