// insert sort + wypisywanie po każdej zamianie
// notatki: literalny pseudokod

#include <stdio.h>

void poka(int *A, int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void insertSort(int *A, int n){
    int i=1;

    while(i<n){
        int j=i;

        while(j>0 && A[j-1] > A[j]){
            int tmp = A[j];
            A[j] = A[j-1];
            A[j-1] = tmp;

            poka(A,n);
            j--;
        }

        i++;
    }
}

int main(){
    int t[]={5,3,7,1,4};
    int n=5;
    insertSort(t,n);
}
