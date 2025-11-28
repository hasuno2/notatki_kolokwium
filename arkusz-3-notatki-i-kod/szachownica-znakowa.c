// zadanie 6 – szachownica "__" i "##"

#include <stdio.h>

int main() {
    char board[8][16];

    for(int i=0;i<8;i++){
        for(int j=0;j<16;j+=2){
            if(((i+j/2)%2)==0){
                board[i][j] = '_';
                board[i][j+1] = '_';
            } else {
                board[i][j] = '#';
                board[i][j+1] = '#';
            }
        }
    }

    for(int i=0;i<8;i++){
        for(int j=0;j<16;j++){
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
}
