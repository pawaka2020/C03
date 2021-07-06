void  scan(char *str, char *to_find, int i, int *npos)
{
  int x;
  int y;

  x = i;
  y = 0;
  while (to_find[y])
  {
    if (to_find[y] == str[x])
    {
      *npos = x;
    }
    else
    {
      *npos = -1;
    }
      y++;
      x++;
  }
  if (*npos != -1)
  {
    *npos = i;
  }
}

void  setresult(char **result, int npos, char *str, char* to_find)
{
  if (to_find[0] == '\0')
  {
    *result = str;
  }
  else if (npos == -1)
  {
    *result = "\0";
  }
  else
  {
    *result = str + npos;
  }
}

char  *ft_strstr(char *str, char *to_find)
{
  char *result;
  int i;
  int npos;

  npos =-1;
  i = -1;
  while (i++, str[i])
  {
    if ((str[i] == to_find[0]) && npos == -1)
    {
      scan(str, to_find, i, &npos);
    }
  }
  setresult(&result, npos, str, to_find);
  return (result);
}

#include <string.h>
#include <stdio.h>
int main(int argc, char *args[])
{
  char *output = ft_strstr(args[1], args[2]);
  printf("The output from ft_strstr is: %s\n", output);
  char *output2 = strstr(args[1], args[2]);
  printf("The output from strstr is: %s\n", output);
}