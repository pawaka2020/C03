int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int unsigned i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
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
//   char s2[] = "Hella";
//   unsigned int n = 5;
//   printf("s1: %s, s2: %s, n = %d\n",s1, s2, n);
//   int result = ft_strncmp(s1, s2, n);
//   printf("%d\n", result);
//   if (result != 0)
//   {
//     printf("s1 and s2 are not the same");
//   }
//   else 
//   {
//     printf("s1 and s2 are the same");
//   }
// }