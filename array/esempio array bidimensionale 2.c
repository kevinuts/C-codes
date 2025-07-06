#include <stdio.h>
void alt(){
     int N,M,x,I,J;
     printf("inserisci 2 numeri");
     scanf("%d%d2", &N, &M);
     for(I = 0,x = 1;I < M; I++){
           for(J = 0;J < N; J++,x++){
                 printf("%d", x);
           }
     printf("\n");
     }
}
int main(){

int c = 1,n = 2,m = 3,i,j;

for(i = 1; i <= n; i++){
for(j = 1;j <= m; j++){
printf("%-4d", c);
c++;
}
printf("\n");
}
for(i = 1; i <= n; i++){
for(j = 1;j <= m; j++){
printf("%d", (i*m)+j);
}
printf("\n");
}
alt();
return 0;
}
