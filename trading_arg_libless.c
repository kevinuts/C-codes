#include <stdio.h>
#include <string.h>
void trade(char *l, char *r) {
    if (l != r && l > r) {
        char c = *l;
        *l = *r;
        *r = c;
        trade(l + 1, r - 1);
}
}
int main (int argc, char *argv[]){
    if(argc!=2){
		fprintf(stderr, "ERRORE FORMATO INPUT");
        return -1;
	}
    //printf("%d", strlen(s) % 2);
    trade(argv[1], argv[1] + strlen(argv[1]) - 1);
    printf("%s", argv[1]);
    return 0;
}