#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
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
#include <string.h>
int main()
{
	
	char *str;
	char *copy;

	str = "carinos";
	copy = (char *)malloc(sizeof(char) * (strlen(str) + 1));
	printf("%s", ft_strcpy(copy, str));
	free(copy);
	return (0);
}
