#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;

	while (s[i] != '\0')
	{
		if (ft_strchr(accept, s[i]) == 0)
			break;
		++i;
	}
	return (i);
}

int main()
{
	const char str[] = "ABCDEFG019874";
	const char acc[] = "ABCD";

	printf("%zu", ft_strspn(str, acc));
	printf("\n");
	printf("%zu", strspn(str, acc));
	return (0);
}
