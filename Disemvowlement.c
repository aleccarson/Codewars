#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *disemvowel(const char *str)
{
  int y = 0;
  char *newString = malloc(sizeof(char) * strlen(str + 1));
  
  for(int i = 0; i < strlen(str); i++)
  {
      printf("%c, %d\n", str[i], i);
    if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U')
      newString[y++] = str[i];
  }
  newString[y] = '\0';
  //printf("%s", newString);
    return newString;
}

int main(void)
{
    printf("%s yes", disemvowel("stinky"));
}