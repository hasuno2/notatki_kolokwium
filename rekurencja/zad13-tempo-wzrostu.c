
#include <stdio.h>

unsigned long long fact(unsigned long long n){
    if(n==0) return 1;
    return n*fact(n-1);
}

unsigned long long sf(unsigned long long n){
    if(n==0) return 1;
    return fact(n)*sf(n-1);
}

unsigned long long H(unsigned long long n){
    if(n==0) return 1;
    if(n==1) return 1;
    return n*H(n-1);
}

int main(){
    for(unsigned long long i=1;i<=10;i++){
        printf("%llu %llu %llu %llu\n", i,fact(i),sf(i),H(i));
    }
}
