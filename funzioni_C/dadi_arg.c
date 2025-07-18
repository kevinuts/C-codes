# include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[]){ //main + lettura imput tiri
    if (argc != 2) {
        printf("...");
        return -1;
        } //controlla se ci sono pù di 2 caratteri
    srand((unsigned) time(NULL)); //inizializzazione rand (serve per generare numeri random)
    int tiri = atoi(argv[1]); //conta quali tiri ci saranno
    int i; //per il ciclo for
    if(tiri > 12){ //fix di tiri nel caso si seleziona un numero maggiore di 12 (lo si mette a 12 e si avvisa l'utente)
        printf("numero troppo grande, fissato a 12 \n");
        tiri = 12;
    }
    for(i = 0; i < tiri; i++){ //tiro di dadi
        printf("%d \n", rand() % 6 + 1); //funzione tiro
    }
    return 0; //questo programma non fa loop
}