#include <stdio.h>
#include <math.h>
int main(){
int a,b,r;
short int tw[2]={0, 0},th[2]={0, 0},f[2]={0, 0},s[2]={0, 0};
printf("inserisci 2 numeri");
scanf("%d%d", &a, &b);
while (a != 0){
if (a % 2 == 0){
  a /= 2;
  tw[0]++;
}
else if(a % 3 == 0){
   a /= 3;
   th[0]++;
}
else if(a % 5 == 0){
   a /= 5;
   f[0]++;
}
else if(a % 7 == 0){
   a /= 7;
   s[0]++;
}
else break;
}
while (b != 0){
if (b % 2 == 0){
  b /= 2;
  tw[1]++;
}
else if(b % 3 == 0){
   b /= 3;
   th[1]++;
}
else if(b % 5 == 0){
   b /= 5;
   f[1]++;
}
else if(b % 7 == 0){
   b /= 7;
   s[1]++;
}
else break;
}
if(tw[0] < tw[1]) tw[2] = pow(2, tw[0]);
else tw[2] = pow(2, tw[1]);
if(th[0] < th[1]) th[2] = pow(2, th[0]);
else th[2] = pow(2, th[1]);
if(f[0] < f[1]) f[2] = pow(2, f[0]);
else f[2] = pow(2, f[1]);
if(s[0] < s[1]) s[2] = pow(2, s[0]);
else s[2] = pow(2, s[1]);
if (a != 0 && a == b) r = tw[2]*th[2]*f[2]*s[2]*a;
else r = tw[2]*th[2]*f[2]*s[2];
printf("l'MCM e %d", r);
return 0;
}
