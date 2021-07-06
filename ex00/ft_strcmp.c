int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
  while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main(void) {
//   char s1[] = "Hello";
//   char s2[] = "Hello";
//   printf("s1: %s, s2: %s\n",s1, s2);
//   int result = ft_strcmp(s1, s2);
//   printf("%d\n", ft_strcmp(s1, s2));
//   if (result != 0)
//   {
//     printf("s1 and s2 are not the same");
//   }
//   else 
//   {
//     printf("s1 and s2 are the same");
//   }
// }