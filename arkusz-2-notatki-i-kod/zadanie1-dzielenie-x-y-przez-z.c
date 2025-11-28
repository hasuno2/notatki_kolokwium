// zadanie 1 – sprawdzenie czy x i y dzielą się przez z

#include <stdio.h>

int main() {
    int x, y, z;

    printf("podaj x y z: ");
    scanf("%d %d %d", &x, &y, &z);

    if (z == 0) {
        printf("nie dzielimy przez zero\n");
        return 0;
    }

    if (x % z == 0 && y % z == 0) {
        printf("obie liczby dziela sie przez %d\n", z);
    } else {
        printf("nie obie dziela sie przez %d\n", z);
    }
}
