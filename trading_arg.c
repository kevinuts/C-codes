#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void trade(char *l, char *r) {
    if (l != r ^ l > r) {
        char c = *l;
        *l = *r;
        *r = c;
        trade(l + 1, r - 1);
}
}
int main (int argc, char *argv[]){
    if(argc!=2){
		fprintf(stderr, "ERRORE FORMATO INPUT");
		exit(EXIT_FAILURE);
	}
    //printf("%d", strlen(s) % 2);
    trade(argv[1], argv[1] + strlen(argv[1]) - 1);
    printf("%s\n", argv[1]);//first method of printing
    puts(argv[1]);//second method of printing
    return 0;
}
