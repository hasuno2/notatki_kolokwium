// Zamiana sekund na: pełne dni, godziny, minuty
// notatki: dzielenie int -> ucinanie, minuty = reszta/60

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

    printf("dni: %d, godzin: %d, minut: %d
", dni, godz, min);
}
