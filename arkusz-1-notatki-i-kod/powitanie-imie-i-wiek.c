// Program wypisuje powitanie na podstawie imienia i wieku
// notatki: scanf do stringa, %s nie potrzebuje &, zwykły printf

#include <stdio.h>

int main() {
    char imie[50];
    int wiek;

    printf("Podaj imie: ");
    scanf("%s", imie);

    printf("Podaj wiek: ");
    scanf("%d", &wiek);

    printf("Witaj %s, masz %d lat.
", imie, wiek);
}
