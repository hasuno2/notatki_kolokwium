// zadanie 4 – sprawdzić czy z kątów można zrobić trójkąt

#include <stdio.h>

int main() {
    int a, b, c;
    printf("podaj 3 katy: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 && a + b + c == 180)
        printf("mozliwy trojkat\n");
    else
        printf("nie mozliwy\n");
}
