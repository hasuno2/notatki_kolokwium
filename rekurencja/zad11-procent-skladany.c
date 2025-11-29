
#include <stdio.h>

double compound_interest(double v,double r,int n){
    if(n==0) return v;
    return compound_interest(v*(1+r), r, n-1);
}

int main(){
    printf("%lf\n", compound_interest(1000,0.05,5));
}
