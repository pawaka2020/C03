int	ft_strcmp(char *s1, char *s2);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strstr(char *str, char *to_find);

#include <stdio.h>

int main(void) {
  char s1[] = "I like pancakes with cherry cream";
  char s2[] = "pan";
  printf("s1: %s, s2: %s\n",s1, s2);
  char *result = ft_strstr(s1, s2);
  printf("%s\n", result);
}