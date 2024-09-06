#include <stdlib.h>
#include <stdio.h>

char	*cns_strchr(const char *s, int c)
{
	do
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
	} 
	while (*s++);

	return (NULL);
}

int	main(void)
{
	char	str1[] = "This is a test string";

	char *c = cns_strchr(str1, '\0');

	(*c == '\0') ? printf("Yes\n") : printf("No\n");

	printf("%s\n", c);

	return (0);
}