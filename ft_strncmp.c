#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while (n > 1 && s1[i] && s1[i] == s2[i])
	{
		n--;
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
