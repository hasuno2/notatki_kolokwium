
#include <stdio.h>
#include <math.h>

void array_means(double *t, int n, double *ar, double *geo, double *har){
    double s=0;
    for(int i=0;i<n;i++) s+=t[i];
    *ar = s/n;

    int neg=0,nonpos=0;
    double gp=1, hs=0;

    for(int i=0;i<n;i++){
        if(t[i]<0) neg=1;
        if(t[i]<=0) nonpos=1;
    }

    if(neg){
        *geo = NAN;
    } else {
        for(int i=0;i<n;i++) gp*=t[i];
        *geo = pow(gp,1.0/n);
    }

    if(nonpos){
        *har = NAN;
    } else {
        for(int i=0;i<n;i++) hs+=1.0/t[i];
        *har = n/hs;
    }
}

int main(){
    double a[]={3,5,4,-3,6};
    double A,G,H;
    array_means(a,5,&A,&G,&H);
    printf("%lf %lf %lf\n",A,G,H);
}
