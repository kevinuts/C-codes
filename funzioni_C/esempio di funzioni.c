#include <stdio.h>

void add(){
     int a,b;
     printf("inserisci i numeri che vuoi addizionare");
     scanf("%d", &a);
     scanf("%d", &b);
     a+=b;
     printf("risultato %d", a);
     }
void sott(){
     int a,b;
     printf("inserisci i numeri che vuoi sottrarre");
     scanf("%d", &a);
     scanf("%d", &b);
     a-=b;
     printf("risultato %d", a);
     }
void m(){
     int a,b;
     printf("inserisci i numeri che vuoi moltiplicare");
     scanf("%d", &a);
     scanf("%d", &b);
     a*=b;
     printf("risultato %d", a);
     }
void d(){
     int a,b;
     printf("inserisci i numeri che vuoi dividere");
     scanf("%d", &a);
     scanf("%d", &b);
     a/=b;
     printf("risultato %d", a);
     }
int main(){
    short int c;
    printf("scegli prima l'operazione poi scegli 2 numeri, le operazioni sono: \n 1 per addizione \n 2 per sottrazine \n 3 per moltiplicazione \n 4 per divisione");
    scanf("%d", &c);
    switch (c){
           case 1:
                add();
                break;
           case 2:
                sott();
                break;
           case 3:
                m();
                break;
           default:
                d();
           }
    return 0;
}
