#include <stdio.h>
int main(){
printf("Inserisci un intero, poi un float, infine un altro intero\n");
int i,k;
float j;
scanf("%d%f%d", &i,&j,&k); //i [invio] j [invio] k [invio]
printf("%d %f %d\n", i,j,k);
printf("Dammi un altro valore intero\n");
int z;
scanf("%d", &z);
printf("z= %d\n", z);
return 0;
}