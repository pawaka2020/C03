#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

int main(void) {
  char s1[] = "Hello";
  char s2[] = " World!";
  printf("s1: %s, s2: %s\n",s1, s2);
  char *result = ft_strcat(s1, s2);
  printf("%s\n", result);
}