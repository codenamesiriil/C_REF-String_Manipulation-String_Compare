#include ".\inc\cns_str_cmp.h"

int	main(void)
{
	
	{
		printf("-> cns_strcmp\n");
		
		char	str1[] = "This is a test String";
		char	str2[] = "This is a test string";

		int		n = cns_strcmp(str1, str2);
		printf("%d\n\n", n);
	}
	{
		printf("-> cns_strncmp\n");
		
		char	str1[] = "This is a test String";
		char	str2[] = "This is a test string";

		int		n = cns_strncmp(str1, str2, 5);
		printf("%d\n\n", n);
	}
	{
		printf("-> cns_strchr\n");
		
		char	str1[] = "This is a test string";
		char 	*c = cns_strchr(str1, '\0');

		(*c == '\0') ? printf("Yes\n") : printf("No\n");

		printf("%s\n\n", c);
	}
	{
		printf("-> cns_strrchr\n");
		
		char	str1[] = "This is a string";
		char	*ptr = cns_strrchr(str1, 's');
		
		(*ptr == '\0') ? printf("Yes\n") : printf("No\n");
		
		printf("%s\n\n", ptr);
	}
	{
		printf("-> cns_strstr\n");
		
		char	str1[] = "This is a string";
		char	str2[] = "is a";
		char	*ptr = cns_strstr(str1, str2);

		printf("%s\n\n", ptr);
	}
	return (0);
}