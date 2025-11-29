
#include <stdio.h>

int GCD(int a,int b){
    while(b!=0){
        int t=b;
        b=a%b;
        a=t;
    }
    return a;
}

int main(){
    printf("%d\n", GCD(48,18));
}
