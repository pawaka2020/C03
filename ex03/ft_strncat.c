#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>

// int main(void) {
//   char s1[] = "Hello";
//   char s2[] = " World!";
//   unsigned int nb = 3;
//   printf("s1: %s, s2: %s, nb = %d\n",s1, s2, nb);
//   char *result = ft_strncat(s1, s2, nb);
//   printf("%s\n", result);
// }