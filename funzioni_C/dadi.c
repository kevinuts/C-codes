# include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand((unsigned) time(NULL)); //inizializzazione rand (serve per generare numeri random)
    int tiri; //conta quali tiri ci saranno
    int i; //per il ciclo for
    char scelta; //per ricominciare
    ricomincia:
    printf("programma tiro di dadi, inserisci i dadi che devi tirare (max 12)");
    scanf("%d", &tiri); //input tiri
    if(tiri > 12){ //fix di tiri nel caso si seleziona un numero maggiore di 12 (lo si mette a 12 e si avvisa l'utente)
        printf("numero troppo grande, fissato a 12 \n");
        tiri = 12;
    }
    for(i = 0; i < tiri; i++){ //tiro di dadi
        printf("%d \n", rand() % 6 + 1); //funzione tiro
    }
    printf("tiro di dadi finito, vuoi tirare ancora? (Y/N) \n"); //scelta di ricominciare
    scanf(" %c", &scelta);
    printf("\n");
    if(scelta == 'Y' || scelta == 'y') goto ricomincia; //azione in caso affermativo
    else printf("arrivederci ;^) \n"); //uscita in caso contrario
    return 0;
}