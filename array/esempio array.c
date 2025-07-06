#include<stdio.h>
void funzione_array(int y[], int n) {//moltiplica le caselle di array
int i;
for (i=0; i<n; i++) {
y[i] *= 2;
printf("y = %d\n",y[i]);
}
}
void funzione_intero(int x, int n) {//moltiplica X per 2
int i;
for (i=0; i<n; i++) {
    x *= 2;
    printf("x = %d\n",x);
}
}
int main(void) {
int x = 4;
int a[5] = {1,2,3,4,5};
funzione_intero(x,2);
funzione_array(a,5);
printf("a = %d\n",a[2]); //in realtà è la terza casella
return 0;
}
