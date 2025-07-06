#include <stdio.h>
#define m 5
#define n 5
int main (){
int a[m][n];
int i, j, k = 1;
for (i = 1; i <= m; i++){
    for(j = 1; j <= n; j++){
          a[i][j] = k;
		  k++;
    }
}
for (i = 1; i <= m; i++){
    for(j = 1; j <= n; j++){
          printf("%3d", a[i][j]);
    }
    printf("\n");
}
return 0;
}
