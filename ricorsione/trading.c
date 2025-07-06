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
int main (){
    char s[] = "abcde";
    //printf("%d", strlen(s) % 2);
    trade(s, s + strlen(s) - 1);
    printf("%s", s);
    return 0;
}