// zadanie 3 – sprawdzić czy x i y mają tę samą resztę modulo z

#include <stdio.h>

int main() {
    int x, y, z;
    printf("podaj x y z: ");
    scanf("%d %d %d", &x, &y, &z);

    if (z == 0) {
        printf("nie dzielimy przez zero\n");
        return 0;
    }

    int rx = x % z;
    int ry = y % z;

    if (rx == ry) {
        printf("maja taka sama reszte\n");
    } else {
        int k = (ry - rx);
        if (k < 0) k += z;
        printf("trzeba zwiekszyc x o %d\n", k);
    }
}
