#include <stdio.h>
int ca(char [], char []);
int main()
{
  char a[1000], b[1000];
  printf("in questo programma si controlla l'anagramma, scrivi 2 parole");
  gets(a);
  gets(b);
  if (ca(a, b))
    printf("sono anagrammi");
  else
    printf("non sono anagrammi");
  return 0;
}
int ca(char a[], char b[])
{
  int first[26] = {0}, second[26] = {0}, c=0;
  while (a[c] != '\0') {
    first[a[c]-'a']++;
    c++;
  }
  c = 0;
    while (b[c] != '\0') {
    second[b[c]-'a']++;
    c++;
  }
  for (c = 0; c < 26; c++)
    if (first[c] != second[c])
      return 0;
  return 1;
}
