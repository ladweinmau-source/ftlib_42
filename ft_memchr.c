#include <stdlib.h>

void	*memchr(const void *s, int c, size_t n)
{
	const unsigned char	*wow;

	c = (unsigned char)c;
	wow = (const unsigned char *)s;
	while (n)
	{
		if (*wow == c)
			return ((void *)wow);
		wow++;
		n--;
	}
	return (NULL);
}