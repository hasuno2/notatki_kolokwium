// zadanie 2 – ile trzeba zwiększyć x i y żeby były podzielne przez z

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

    if (rx == 0) printf("x juz jest ok\n");
    else printf("x trzeba zwiekszyc o %d\n", z - rx);

    if (ry == 0) printf("y juz jest ok\n");
    else printf("y trzeba zwiekszyc o %d\n", z - ry);
}
