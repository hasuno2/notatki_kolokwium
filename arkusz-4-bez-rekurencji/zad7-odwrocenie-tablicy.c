
#include <stdio.h>

void reverse(int *t, int n){
    for(int i=0;i<n/2;i++){
        int k=t[i];
        t[i]=t[n-1-i];
        t[n-1-i]=k; // zamiana
    }
}

int main(){
    int x[]={1,2,3,4,5};
    reverse(x,5);
    for(int i=0;i<5;i++) printf("%d ", x[i]);
}
