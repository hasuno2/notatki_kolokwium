// dzielniki n
// notatki: brute force, wystarczy

#include <stdio.h>

int main(){
    int n;
    printf("n: ");
    scanf("%d",&n);

    int ile = 0;

    for(int i=1; i<=n; i++){
        if(n%i==0){
            printf("%d\n", i);
            ile++;
        }
    }

    printf("liczba dzielnikow: %d\n", ile);
}
