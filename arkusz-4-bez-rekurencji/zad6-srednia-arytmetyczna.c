
#include <stdio.h>

double avg(double *t, int n){
    double s=0;
    for(int i=0;i<n;i++) s+=t[i];
    return s/n;
}

int main(){
    double a[]={1,2,3,4};
    printf("%lf\n", avg(a,4));
}
