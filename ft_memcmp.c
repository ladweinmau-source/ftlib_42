#include <stdlib.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	unsigned char *one;
	unsigned char *two;

	one = (unsigned char *)s1;
	two = (unsigned char *)s2;
	i = 0;
	while (n > 0 && one[i] == two[i])
	{
		n--;
		i++;
	}
	if (!n)
		return (0);
	return ((unsigned char)one[i] - (unsigned char)two[i]);
}