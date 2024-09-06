#include <stdlib.h>
#include <stdio.h>

char	*cns_strrchr(const char *s, int c)
{
	const char	*ptr = s;

	while (*s != '\0')
		s++;

	do
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
	} while (s-- != ptr);

	return (NULL);
}

int	main(void)
{
	char	str1[] = "This is a string";
	char	*ptr = cns_strrchr(str1, 's');

	printf("%s\n", ptr);
	
	(*ptr == '\0') ? printf("Yes\n") : printf("No\n");

	return (0);
}