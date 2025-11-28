// jednostki -> m
// notatki: strcmp==0 jak równe; konwersje ręczne

#include <stdio.h>
#include <string.h>

int main() {
    char j[10];
    double x, wynik;

    printf("j (km/cm/mm): ");
    scanf("%s", j);

    printf("liczba: ");
    scanf("%lf", &x);

    if(strcmp(j,"km")==0){
        wynik = x * 1000;
    } 
    else if(strcmp(j,"cm")==0){
        wynik = x / 100;
    }
    else if(strcmp(j,"mm")==0){
        wynik = x / 1000;
    } 
    else {
        printf("nie znam tej jednostki
");
        return 0;
    }

    printf("%lf %s = %lf m
", x, j, wynik);
}
