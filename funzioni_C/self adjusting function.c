#include<stdio.h>
#define f 5
int c (int a[], int n);
int main(){
int r[f],j,m;
printf("inserisci prima i numeri");
for (j = 0; j <= f; j++) scanf("%d", &r[j]);
printf("ora quanti numeri vuoi analizzare?");
scanf("%d", &m);
printf("numeri dispari totale : %d", c(r,m));
return 0;
}
int c (int a[], int n){
int i,b = 0;
if (n > f) n = f;
for (i = 0; i <= n; i++){
if (a[i] % 2 == 0) b++;
}
return b;
}
