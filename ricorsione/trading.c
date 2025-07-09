#include <stdio.h>
#include <string.h>
void trade(char *l, char *r) {
    if (l != r  ^ l > r) {
        char c = *l;
        *l = *r;
        *r = c;
        trade(l + 1, r - 1);
}
}
int main (){
    char s[] = "abcdef";
    //printf("%d", strlen(s) % 2);
    trade(s, s + strlen(s) - 1);
    puts(s); //first method of printing
    printf("%s\n", s); //second method of printing
    return 0;
}
