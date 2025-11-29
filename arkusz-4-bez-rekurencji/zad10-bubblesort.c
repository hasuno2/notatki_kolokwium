
#include <stdio.h>

void bubbleSort(int *t, int n){
    int sw=1;
    while(sw){
        sw=0;
        for(int i=1;i<n;i++){
            if(t[i-1]>t[i]){
                int k=t[i];
                t[i]=t[i-1];
                t[i-1]=k;
                sw=1;
            }
        }
    }
}

int main(){
    int x[]={5,3,8,1,2};
    bubbleSort(x,5);
    for(int i=0;i<5;i++) printf("%d ",x[i]);
}
