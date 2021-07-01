char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0')
		{
			if (str[i + j] == to_find[j])
			{
				j++;
			}
			else
				break ;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main(void) {
//   char s1[] = "I like pancakes with cherry cream";
//   char s2[] = "pan";
//   printf("s1: %s, s2: %s\n",s1, s2);
//   char *result = ft_strstr(s1, s2);
//   printf("%s\n", result);
// }