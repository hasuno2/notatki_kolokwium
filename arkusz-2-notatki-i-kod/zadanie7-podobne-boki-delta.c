// zadanie 7 – podobieństwo trójkątów na podstawie boków z dokładnością delta

#include <stdio.h>
#include <math.h>

int main() {
    long double a1,b1,c1;
    long double a2,b2,c2;
    long double delta;

    printf("podaj boki trojkata 1 (a<=b<=c): ");
    scanf("%Lf %Lf %Lf", &a1,&b1,&c1);

    printf("podaj boki trojkata 2 (a<=b<=c): ");
    scanf("%Lf %Lf %Lf", &a2,&b2,&c2);

    printf("delta: ");
    scanf("%Lf", &delta);

    long double r1 = a2/a1;
    long double r2 = b2/b1;
    long double r3 = c2/c1;

    if (fabsl(r1 - r2) < delta && fabsl(r2 - r3) < delta)
        printf("podobne\n");
    else
        printf("nie podobne\n");
}
