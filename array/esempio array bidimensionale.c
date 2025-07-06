#include <stdio.h>
#define b 3
#define c 2
int main (void){
int a[c][b] = {
    {1, 3, 5},
    {2, 4, 6}
};
int i, j;
for (i = 0; i < c; i++){
    for(j = 0; j < b; j++){
          printf("%3d", a[i][j]);
    }
    printf("\n");
}
return 0;
}
