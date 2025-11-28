// zadanie 8 – czy 3 punkty mogą tworzyć trójkąt (liczymy długości boków)

#include <stdio.h>
#include <math.h>

int main() {
    double x1,y1,x2,y2,x3,y3;

    printf("podaj punkty: ");
    scanf("%lf %lf %lf %lf %lf %lf", &x1,&y1,&x2,&y2,&x3,&y3);

    double a = hypot(x2-x1, y2-y1);
    double b = hypot(x3-x2, y3-y2);
    double c = hypot(x3-x1, y3-y1);

    if (a < b+c && b < a+c && c < a+b)
        printf("mozna zbudowac trojkat\n");
    else
        printf("nie mozna\n");
}
