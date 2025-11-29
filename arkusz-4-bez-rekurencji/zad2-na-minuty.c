
#include <stdio.h>

double to_minutes(double s){
    return s/60.0; // po prostu dzielenie
}

int main(){
    printf("%lf\n", to_minutes(300));
    return 0;
}
