#include <stdio.h>
#include <stdlib.h>

char    *cns_strstr(const char *haystack, const char *needle)
{
    int		i, j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	if (haystack[0] == '\0')
		return (NULL);
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while ((haystack[i + j] == needle[j]) && needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	str1[] = "";
	char	str2[] = "";
	char	*ptr;

	ptr = cns_strstr(str1, str2);
	printf("%s\n", ptr);
	return (0);
}