/* Prints a date in legal form */
#include <stdio.h>
int main(void)
{ int month, day, year;
printf("Enter date (mm/dd/yy): ");
scanf("%d /%d /%d", &month, &day, &year);
printf("Dated this %d", day);
switch (day) {
case 1: case 21: case 31: //UNICA LINEA SENZA BREAK: casi raggruppati
printf("st");
break; //qui serve il break
case 2: case 22: //UNICA LINEA SENZA BREAK: casi raggruppati
printf("nd");
break; //qui serve il break
case 3: case 23: //UNICA LINEA SENZA BREAK: casi raggruppati
printf("rd");
break; //qui serve il break
default: printf("th");
break; //qui non servirebbe il break
}
printf(" day of ");
switch (month) {
case 1: printf("January"); break;
case 2: printf("February"); break;
case 3: printf("March"); break;
case 4: printf("April"); break;
case 5: printf("May"); break;
case 6: printf("June"); break;
case 7: printf("July"); break;
case 8: printf("August"); break;
case 9: printf("September"); break;
case 10: printf("October"); break;
case 11: printf("November"); break;
case 12: printf("December"); break;
}
printf(", 20%.2d.\n", year);
return 0;
}
