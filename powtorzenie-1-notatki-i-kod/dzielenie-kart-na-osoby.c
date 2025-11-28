// karty
// notatki: reszta != 0 -> nie dzieli się

#include <stdio.h>

int main(){
    int karty, osoby;
    printf("ile kart: ");
    scanf("%d",&karty);

    printf("ile osob: ");
    scanf("%d",&osoby);

    int na_os = karty / osoby; 
    int reszta = karty % osoby;

    if(reszta == 0){
        printf("kazdy dostaje %d kart\n", na_os);
    } else {
        printf("nie dzieli sie rowno\n");
        printf("reszta: %d\n", reszta);
    }
}
