// zadanie 5 – podobieństwo trójkątów na podstawie kątów

#include <stdio.h>

int main() {
    int a1,b1,c1;
    int a2,b2,c2;

    printf("katy trojkata 1: ");
    scanf("%d %d %d", &a1,&b1,&c1);

    printf("katy trojkata 2: ");
    scanf("%d %d %d", &a2,&b2,&c2);

    if (a1 + b1 + c1 != 180 || a2 + b2 + c2 != 180) {
        printf("bledne trojkaty\n");
        return 0;
    }

    if (a1 == a2 && b1 == b2 && c1 == c2)
        printf("trojkaty podobne\n");
    else
        printf("nie podobne\n");
}
