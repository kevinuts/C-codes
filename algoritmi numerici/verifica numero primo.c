#include <stdio.h>
int main(){
int p,i,y;
printf("questo programma verifica se il numero e primo, inseriscilo:");
scanf("%d", &p);
if (p < 0)
  for(i = p * -1; i >= 1; i--){
  if(p % i == 0)
    y++;
  }
else
  for(i = p; i >= 1; i--){
  if(p % i == 0)
    y++;
  }
if (y == 2)
	printf("%d e un numero primo", p);
else
	printf("%d non e un numero primo", p);
return 0;
}
