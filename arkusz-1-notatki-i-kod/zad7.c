// Konwersja sekund do formatu dd:hh:mm:ss

#include <stdio.h>

int main() {
    int sek;
    printf("Podaj liczbe sekund: ");
    scanf("%d", &sek);

    int dni = sek / 86400;
    sek %= 86400;

    int godz = sek / 3600;
    sek %= 3600;

    int min = sek / 60;
    int sec = sek % 60;

    printf("%d:%d:%d:%d
", dni, godz, min, sec);
}
