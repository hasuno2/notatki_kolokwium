// tablica NxN, odwrócenie kolumn, dolny trójkąt
// notatki: swap kolumn pierwszy z ostatnim itd. j<=i -> trojkat

#include <stdio.h>

int main(){
    int N;
    printf("N: ");
    scanf("%d",&N);

    int t[N][N];
    int x = 1;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            t[i][j] = x++;
        }
    }

    for(int j=0;j<N/2;j++){
        for(int i=0;i<N;i++){
            int tmp = t[i][j];
            t[i][j] = t[i][N-1-j];
            t[i][N-1-j] = tmp;
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
}
