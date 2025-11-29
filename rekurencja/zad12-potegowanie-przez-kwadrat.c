
#include <stdio.h>

double pow_square(double x,int n){
    if(n==0) return 1;
    if(n<0) return 1.0/pow_square(x,-n);
    if(n==1) return x;

    if(n%2==0) return pow_square(x*x,n/2);
    return x * pow_square(x*x,(n-1)/2);
}

int main(){
    printf("%lf\n", pow_square(2,10));
}
