#include<stdio.h>
int main(void) {
int m1, d1, y1, m2, d2, y2;
printf("Inserisci la prima data (mm/dd/yy): ");
scanf("%d/%d/%d", &m1, &d1, &y1);
printf("Inserisci la seconda data (mm/dd/yy): ");
scanf("%d/%d/%d", &m2, &d2, &y2);
if (y1<y2) printf("%.2d/%.2d/%.2d precede %.2d/%.2d/%.2d\n",
m1, d1, y1, m2, d2, y2);
else if (y1>y2) printf("%.2d/%.2d/%.2d precede %.2d/%.2d/%.2d\n",
m2, d2, y2, m1, d1, y1);
//gli anni sono uguali. Quindi passiamo a controllare i mesi
else if (m1<m2) printf("%.2d/%.2d/%.2d precede %.2d/%.2d/%.2d\n",
m1, d1, y1, m2, d2, y2);
else if (m1>m2)printf("%.2d/%.2d/%.2d precede %.2d/%.2d/%.2d\n",
m2, d2, y2, m1, d1, y1);
//anche i mesi sono uguali. Quindi passiamo a controllare i giorni
else if (d1 < d2) printf("%.2d/%.2d/%.2d precede %.2d/%.2d/%.2d\n",
m1, d1, y1, m2, d2, y2);
else if (d1 > d2) printf("%.2d/%.2d/%.2d precede %.2d/%.2d/%.2d\n",
m2, d2, y2, m1, d1, y1);
//ALTRIMENTI LE DATE COINCIDONO
else printf("Le date sono uguali\n");
return 0;
}