#include <stdio.h>
#define N 5
int addition(int a[]){
int i, t = 0;
for(i = 0; i < N; i++){
t = t + a[i];
}
return t;
}
int main(){
int a[N] = {1, 2, 3, 4, 5};
printf("%d \n %o", addition(a), addition(a));
return 0;
}