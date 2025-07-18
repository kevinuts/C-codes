#include <stdio.h>
void swap (int a, int b);
int main (void){
int c = 1, d = 2;
swap (c, d);
printf("c = %d and d = %d \n", c,d);
return 0;
}
void swap (int a, int b)
{
int temp = a;
a = b;
b = temp;
}
