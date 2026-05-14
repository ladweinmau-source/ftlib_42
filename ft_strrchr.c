#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}


#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("The character %c, was found here: %s\n", 'a', ft_strrchr("hsaghhl", 'a'));
	printf("The character %c, was found here: %s\n", 'a', strrchr("hsaghshl", 'a'));
	printf("The character %c, was found here: %s\n", 'a', ft_strrchr("hghahl", '\0'));
	printf("The character %c, was found here: %s\n", 'a', strrchr("hghahl", '\0'));
	printf("The character %c, was found here: %s\n", 'a', ft_strrchr("hghahl", 'z'));
	printf("The character %c, was found here: %s\n", 'a', strrchr("hghahl", 'z'));
}