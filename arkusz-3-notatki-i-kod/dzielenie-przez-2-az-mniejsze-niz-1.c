// zadanie 7 – dzielenie m przez 2 aż <1

#include <stdio.h>

int main() {
    double m;
    printf("podaj m: ");
    scanf("%lf",&m);

    do {
        m = m/2.0;
        printf("%f\n", m);
    } while(m >= 1.0);
}
