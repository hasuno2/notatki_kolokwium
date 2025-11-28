// zadanie 6 – pitagoras z dokładnością delta

#include <stdio.h>
#include <math.h>

int main() {
    long double a, b, c;
    long double delta;

    printf("podaj najdluzszy bok c i pozostale boki a b: ");
    scanf("%Lf %Lf %Lf", &c, &a, &b);

    printf("podaj delta: ");
    scanf("%Lf", &delta);

    long double L = fabsl(c*c - (a*a + b*b));

    printf("blad = %.35Lf\n", L);

    if (L < delta)
        printf("trojkat prostokatny\n");
    else
        printf("nie prostokatny\n");
}
