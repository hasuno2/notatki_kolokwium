/*
     – GEOMETRIA, EPSILON, SORTOWANIE, CIĄGI



*/

#include <stdio.h>

int main() {

/*
   1. TRÓJKĄT Z BOKÓW

/*
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double naj = a;
    if (b > naj) naj = b;
    if (c > naj) naj = c;

    double reszta = a + b + c - naj;

    if (naj < reszta) {
        printf("jest trojkat\n");
    } else {
        printf("nie ma trojkata\n");
    }
*/


/*
   2. TRZY PUNKTY – CZY LEŻĄ NA JEDNEJ PROSTEJ (EPSILON)

/*
    double x1, y1, x2, y2, x3, y3, eps;

    scanf("%lf %lf %lf %lf %lf %lf %lf",
          &x1, &y1, &x2, &y2, &x3, &y3, &eps);

    double dx1 = x2 - x1;
    double dy1 = y2 - y1;
    double dx2 = x3 - x1;
    double dy2 = y3 - y1;

    double T = dx1 * dy2 - dx2 * dy1;

    if (T < 0) T = -T;   // moduł

    if (T < eps) {
        printf("punkty leza na jednej prostej\n");
    } else {
        printf("punkty NIE leza na jednej prostej\n");
    }
*/


/*
   3. TOŻSAMOŚĆ NUMERYCZNA:
      (x^2 - 1) / (x - 1) = x + 1   (EPSILON)

/*
    double x, eps;
    scanf("%lf %lf", &x, &eps);

    if (x == 1.0) {
        printf("dzielenie przez zero / nieokreslone\n");
    } else {
        double L = (x*x - 1.0) / (x - 1.0);
        double R = x + 1.0;

        double diff = L - R;
        if (diff < 0) diff = -diff;

        if (diff < eps) {
            printf("rowne numerycznie\n");
        } else {
            printf("nierowne numerycznie\n");
        }
    }
*/


/*
   4. RÓWNOLEGŁE PROSTE (4 PUNKTY, EPSILON)

/*
    double x1, y1, x2, y2;
    double x3, y3, x4, y4;
    double eps;

    scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf",
          &x1, &y1, &x2, &y2,
          &x3, &y3, &x4, &y4,
          &eps);

    int p1_pion = (x1 == x2);
    int p2_pion = (x3 == x4);

    if (p1_pion && p2_pion) {
        printf("rownolegle\n");
    }
    else if (p1_pion || p2_pion) {
        printf("nierownolegle\n");
    }
    else {
        double a1 = (y1 - y2) / (x1 - x2);
        double a2 = (y3 - y4) / (x3 - x4);

        double diff = a1 - a2;
        if (diff < 0) diff = -diff;

        if (diff < eps) {
            printf("rownolegle\n");
        } else {
            printf("nierownolegle\n");
        }
    }
*/


/*
   5. BUBBLE SORT – WERSJA PODSTAWOWA

/*
    int n;
    int tab[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (tab[j] > tab[j+1]) {
                int tmp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
*/


/*
   6. CIĄG ROSNĄCY (NIEMALEJĄCY)

/*
    int n;
    int tab[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    int ok = 1;
    for (int i = 1; i < n; i++) {
        if (tab[i] < tab[i - 1]) {
            ok = 0;
        }
    }

    if (ok) {
        printf("rosnacy\n");
    } else {
        printf("nierosnacy\n");
    }
*/


/*
   7. MIN Z N LICZB (KLASYK)

/*
    int n;
    scanf("%d", &n);

    double val, min;
    scanf("%lf", &min);

    for (int i = 1; i < n; i++) {
        scanf("%lf", &val);
        if (val < min) min = val;
    }

    printf("%lf\n", min);
*/


/*

/*
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    printf("%lf\n", max);
*/


/*
   KONIEC
   */

    return 0;
}
