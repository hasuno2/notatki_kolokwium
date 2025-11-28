// Najwieksza z 3 liczb (a ? b : c)

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Podaj 3 liczby: ");
    scanf("%d %d %d", &a, &b, &c);

    int max = (a > b ? a : b);
    max = (max > c ? max : c);

    printf("Najwieksza: %d
", max);
}
