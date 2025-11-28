// zadanie 3 – tablica 10x10 z wynikami mnożenia

#include <stdio.h>

int main() {
    int tab[10][10];

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            tab[i][j] = (i+1)*(j+1);
        }
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            printf("%4d", tab[i][j]); // zawsze 4 miejsca
        }
        printf("\n");
    }
}
