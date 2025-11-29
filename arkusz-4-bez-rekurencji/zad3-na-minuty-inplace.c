
#include <stdio.h>

void to_minutes_inplace(double *p){
    *p = *p / 60.0; // zmiana zmiennej przez wsk
}

int main(){
    double d=3600;
    to_minutes_inplace(&d);
    printf("%.2lf\n", d);
}
