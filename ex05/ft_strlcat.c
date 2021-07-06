#include <stdio.h>

int getlen(char *dest)
{
  int i;

  i = 0;
  while (dest[i])
  {
    i++;
  }
  return (i);
}

void destcat(char *dest, char *src, int _size, int destlen)
{
  int i;
  int j;

  i = destlen;
  j = 0;
  while((i < _size) && (src[j]))
  {
    dest[i] = src[j];
    i++;
    j++;
  }
  dest[i] = '\0';
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
  int destlen;
  int srclen;
  int _size;

  destlen = getlen(dest);
  srclen = getlen(src);
  _size = size - 1;
  if (destlen < _size)
  {
    destcat(dest, src, _size, destlen);
  }
  return (srclen + destlen);
}

#include <stdio.h>
int main(void)
{
  char dest[] = "Hello";
  char src[] = " World!";
  int result = ft_strlcat(dest, src,  9);
  printf("%s\n", dest);
  printf("%d\n", result);
}

    
