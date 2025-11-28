// zadanie 4 – tablica 4x4 i różne sposoby wyświetlania

#include <stdio.h>

#define N 4

int main() {
    int t[N][N];
    int k=1;

    // wypełnienie
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            t[i][j]=k++;
        }
    }

    // standard
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // row-major (po wierszach)
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%d ", t[i][j]);
        }
    }
    printf("\n\n");

    // column-major (po kolumnach)
    for(int j=0;j<N;j++){
        for(int i=0;i<N;i++){
            printf("%d ", t[i][j]);
        }
    }
    printf("\n\n");

    // alternating rows
    for(int i=0;i<N;i++){
        if(i%2==0){
            for(int j=0;j<N;j++) printf("%d ", t[i][j]);
        } else {
            for(int j=N-1;j>=0;j--) printf("%d ", t[i][j]);
        }
    }
    printf("\n\n");

    // frames
    for(int f=0; f<N; f++){
        for(int j=f;j<N;j++) printf("%d ", t[f][j]); // wiersz
        for(int i=f+1;i<N;i++) printf("%d ", t[i][N-1-f]); // kolumna
    }
    printf("\n\n");

    // RL diagonals
    for(int s=0;s<=2*(N-1);s++){
        for(int i=0;i<N;i++){
            int j = s-i;
            if(j>=0 && j<N){
                printf("%d ", t[i][j]);
            }
        }
    }
    printf("\n\n");

    // RL reversed
    for(int s=0;s<=2*(N-1);s++){
        for(int i=N-1;i>=0;i--){
            int j = s-i;
            if(j>=0 && j<N){
                printf("%d ", t[i][j]);
            }
        }
    }
    printf("\n\n");

    // LR diagonals
    for(int s=0;s<=2*(N-1);s++){
        for(int i=0;i<N;i++){
            int j = (N-1 - s) + i;
            if(j>=0 && j<N){
                printf("%d ", t[i][j]);
            }
        }
    }
    printf("\n\n");

    // LR reversed
    for(int s=0;s<=2*(N-1);s++){
        for(int i=N-1;i>=0;i--){
            int j = (N-1 - s) + i;
            if(j>=0 && j<N){
                printf("%d ", t[i][j]);
            }
        }
    }
    printf("\n");
}
