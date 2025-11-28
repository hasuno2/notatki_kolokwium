// sprawdzanie tożsamości (x^2 - 1)/(x - 1) ≈ (x + 1)
// uwaga: dla x = 1 mamy dzielenie przez zero (nie definiujemy LHS)
// porównujemy lewą i prawą stronę z dokładnością epsilon
// fabs(lewa - prawa) < eps → uznajemy, że tożsamość działa numerycznie

#include <stdio.h>
#include <math.h>

int main() {
    double x, eps;
    printf("x: ");
    scanf("%lf", &x);

    printf("epsilon: ");
    scanf("%lf", &eps);

    double prawa = x + 1;

    if (fabs(x - 1) < 1e-12) {
        printf("nie da sie policzyc lewej strony (dzielenie przez zero)\n");
        return 0;
    }

    double lewa = (x*x - 1) / (x - 1);

    if (fabs(lewa - prawa) < eps) {
        printf("tozsamosc spelniona z dokladnoscia epsilon\n");
    } else {
        printf("tozsamosc NIE spelniona\n");
    }
}
