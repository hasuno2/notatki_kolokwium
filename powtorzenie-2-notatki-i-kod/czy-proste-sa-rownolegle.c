// sprawdzanie czy prosta przez (x1,x2) jest równoległa do prostej (x3,x4)
// prosta przez dwa punkty ma współczynnik a = (y1-y2)/(x1-x2), jeśli nie jest pionowa
// jeśli x1==x2 → prosta pionowa → traktujemy specjalnie
// dwie proste są równoległe gdy:
// 1) obie pionowe
// 2) albo a1 ≈ a2 z dokładnością epsilon

#include <stdio.h>
#include <math.h>

int main() {
    double x1,y1,x2,y2,x3,y3,x4,y4, eps;

    printf("podaj x1 y1: "); scanf("%lf %lf", &x1,&y1);
    printf("podaj x2 y2: "); scanf("%lf %lf", &x2,&y2);
    printf("podaj x3 y3: "); scanf("%lf %lf", &x3,&y3);
    printf("podaj x4 y4: "); scanf("%lf %lf", &x4,&y4);

    printf("epsilon: ");
    scanf("%lf", &eps);

    double a1 = 0, a2 = 0;
    int pion1 = 0, pion2 = 0;

    if (fabs(x1 - x2) < 1e-12) {
        pion1 = 1;
    } else {
        a1 = (y1 - y2) / (x1 - x2);
    }

    if (fabs(x3 - x4) < 1e-12) {
        pion2 = 1;
    } else {
        a2 = (y3 - y4) / (x3 - x4);
    }

    if (pion1 && pion2) {
        printf("proste rownolegle (obie pionowe)\n");
    } else if (pion1 != pion2) {
        printf("proste NIE sa rownolegle (jedna pionowa druga nie)\n");
    } else {
        if (fabs(a1 - a2) < eps) {
            printf("proste rownolegle\n");
        } else {
            printf("proste NIE sa rownolegle\n");
        }
    }
}
