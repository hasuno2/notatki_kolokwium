// zadanie 5 – odwrócenie imienia

#include <stdio.h>

int main() {
    char imie[80];
    char rev[80];

    printf("podaj imie: ");
    scanf("%79s", imie);

    // szukamy końca
    int len=0;
    while(imie[len] != '\0') len++;

    for(int i=0;i<len;i++){
        rev[i] = imie[len-1-i]; // od końca
    }
    rev[len]='\0';

    printf("%s\n", rev);
}
