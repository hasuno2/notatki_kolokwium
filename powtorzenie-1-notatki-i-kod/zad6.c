// funkcje rekurencyjne: Padovana + suma cyfr
// notatki: P(n-2)+P(n-3); suma cyfr = (n%10)+S(n/10)

#include <stdio.h>

int P(int n){
    if(n==0 || n==1 || n==2) return 1;
    return P(n-2) + P(n-3);
}

int S(int n){
    if(n < 10) return n;
    return (n%10) + S(n/10);
}

int main(){
    int x = 27;
    printf("Padovana(%d) = %d\n", x, P(x));

    int y = 5273;
    printf("Suma cyfr %d = %d\n", y, S(y));
}
