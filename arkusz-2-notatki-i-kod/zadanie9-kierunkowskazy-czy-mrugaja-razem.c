// zadanie 9 – kierunkowskazy, sprawdzamy czy mrugną jednocześnie

#include <stdio.h>

int main() {
    int k1,k2,k3;
    int phi1,phi2,phi3;
    int t_delta;

    printf("podaj okresy mrugania k1 k2 k3: ");
    scanf("%d %d %d", &k1,&k2,&k3);

    printf("podaj fazy phi1 phi2 phi3: ");
    scanf("%d %d %d", &phi1,&phi2,&phi3);

    printf("podaj t_delta: ");
    scanf("%d", &t_delta);

    int ok1 = (t_delta >= phi1 && (t_delta - phi1) % k1 == 0);
    int ok2 = (t_delta >= phi2 && (t_delta - phi2) % k2 == 0);
    int ok3 = (t_delta >= phi3 && (t_delta - phi3) % k3 == 0);

    if (ok1 && ok2 && ok3)
        printf("mrugna jednoczesnie\n");
    else
        printf("nie mrugna\n");
}
