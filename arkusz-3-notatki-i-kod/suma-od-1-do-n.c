// zadanie 1 – suma liczb 1..n (for)

#include <stdio.h>

int main() {
    int n;
    printf("podaj n: ");
    scanf("%d",&n);

    int suma = 0;
    for(int i=1;i<=n;i++){
        suma += i; // dodajemy kolejne liczby
    }

    printf("suma = %d\n", suma);
}
