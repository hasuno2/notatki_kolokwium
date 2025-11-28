// sprawdzanie czy 3 punkty leżą na jednej prostej przez pole trójkąta
// idea: jeśli pole trójkąta ~ 0 (z dokładnością epsilon), to punkty są współliniowe
// wzór z wiki: T = |(x1-x3)*(y2-y1) - (x1-x2)*(y3-y1)| / 2
// nie liczę /2, bo porównuję tylko z epsilon i nie ma to znaczenia
// fabs, bo wartość bezwzględna – pole nie ma znaku
// jeśli T < eps → przyjmujemy, że leżą na jednej prostej

#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, x3, y3;
    double eps;

    printf("podaj x1 y1: ");
    scanf("%lf %lf", &x1, &y1);

    printf("podaj x2 y2: ");
    scanf("%lf %lf", &x2, &y2);

    printf("podaj x3 y3: ");
    scanf("%lf %lf", &x3, &y3);

    printf("epsilon: ");
    scanf("%lf", &eps);

    double T = fabs((x1 - x3)*(y2 - y1) - (x1 - x2)*(y3 - y1));

    if (T < eps) {
        printf("punkty leza na jednej prostej\n");
    } else {
        printf("punkty NIE leza na jednej prostej\n");
    }
}
