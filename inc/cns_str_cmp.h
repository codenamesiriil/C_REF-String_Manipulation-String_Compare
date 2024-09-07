#ifndef CNS_STR_CMP
# define CNS_STR_CMP

# include <stdlib.h>
# include <stdio.h>

int		cns_strcmp(const char *s1, const char *s2);
int		cns_strncmp(const char *s1, const char *s2, size_t n);
char	*cns_strchr(const char *s, int c);
char	*cns_strrchr(const char *s, int c);
char    *cns_strstr(const char *haystack, const char *needle);

#endif
