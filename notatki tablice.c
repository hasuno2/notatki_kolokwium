/*
    PĘTLE I TABLICE




*/

#include <stdio.h>

int main(void) {

/*
   BLOK 1: Suma liczb od 1 do n (pętla for)
   "Napisać program, który policzy sumę liczb od 1 do n"

/*
    int n;
    int suma = 0;

    printf("Podaj n:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        suma = suma + i;
    }

    printf("Suma od 1 do %d wynosi %d\n", n, suma);
*/


/*
   BLOK 2: Schodki z # (pętla for zagnieżdżona)
   Przykład dla n = 5:
   #
   ##
   ###
   ####
   #####

/*
    int n;

    printf("Podaj liczbe stopni schodkow:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("#");
        }
        printf("\n");
    }
*/


/*
   BLOK 3: Tablica 10x10 – tab[i][j] = (i+1)*(j+1)

/*
    int tab[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tab[i][j] = (i + 1) * (j + 1);
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%4d", tab[i][j]);
        }
        printf("\n");
    }
*/


/*
   BLOK 4: Tablica 4x4 wypełniona 1..16
   + różne sposoby wypisywania

/*
    int N = 4;
    int a[4][4];
    int val = 1;

    // wypełnianie
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            a[i][j] = val;
            val++;
        }
    }

    // standard
    printf("standard:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // row major
    printf("row major:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", a[i][j]);
        }
    }
    printf("\n\n");

    // column major
    printf("column major:\n");
    for (int j = 0; j < N; j++) {
        for (int i = 0; i < N; i++) {
            printf("%d ", a[i][j]);
        }
    }
    printf("\n\n");

    // naprzemienne wiersze
    printf("alternating rows:\n");
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < N; j++) {
                printf("%d ", a[i][j]);
            }
        } else {
            for (int j = N - 1; j >= 0; j--) {
                printf("%d ", a[i][j]);
            }
        }
    }
    printf("\n\n");

    // ramki
    printf("frames:\n");
    for (int layer = 0; layer < N; layer++) {
        int first = layer;
        int last = N - 1 - layer;
        if (first > last) break;

        for (int j = first; j <= last; j++) {
            printf("%d ", a[first][j]);
        }
        for (int i = first + 1; i <= last; i++) {
            printf("%d ", a[i][last]);
        }
        if (last > first) {
            for (int j = last - 1; j >= first; j--) {
                printf("%d ", a[last][j]);
            }
            for (int i = last - 1; i > first; i--) {
                printf("%d ", a[i][first]);
            }
        }
    }
    printf("\n\n");

    // RL diagonals
    printf("RL diagonals:\n");
    for (int s = 0; s <= 2 * (N - 1); s++) {
        for (int i = 0; i < N; i++) {
            int j = s - i;
            if (j >= 0 && j < N) {
                printf("%d ", a[i][j]);
            }
        }
    }
    printf("\n");

    printf("RL diagonals reversed:\n");
    for (int s = 0; s <= 2 * (N - 1); s++) {
        for (int i = N - 1; i >= 0; i--) {
            int j = s - i;
            if (j >= 0 && j < N) {
                printf("%d ", a[i][j]);
            }
        }
    }
    printf("\n\n");

    // LR diagonals
    printf("LR diagonals:\n");
    for (int d = -(N - 1); d <= (N - 1); d++) {
        for (int i = 0; i < N; i++) {
            int j = i - d;
            if (j >= 0 && j < N) {
                printf("%d ", a[i][j]);
            }
        }
    }
    printf("\n");

    printf("LR diagonals reversed:\n");
    for (int d = -(N - 1); d <= (N - 1); d++) {
        for (int i = N - 1; i >= 0; i--) {
            int j = i - d;
            if (j >= 0 && j < N) {
                printf("%d ", a[i][j]);
            }
        }
    }
    printf("\n");
*/


/*
   BLOK 5: Odwracanie imienia (char imie[], imie_reverse[])

/*
    char imie[80];
    char imie_reverse[80];

    printf("Podaj imie:\n");
    scanf("%79s", imie);

    int len = 0;
    while (imie[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len; i++) {
        imie_reverse[i] = imie[len - 1 - i];
    }
    imie_reverse[len] = '\0';

    printf("Odwrocone imie: %s\n", imie_reverse);
*/


/*
   BLOK 6: Szachownica w char[8][17]

/*
    char chessboard[8][16 + 1];

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 16; j++) {
            int r = j % 4;

            if (i % 2 == 0) {
                if (r == 0 || r == 1) {
                    chessboard[i][j] = '_';
                } else {
                    chessboard[i][j] = '#';
                }
            } else {
                if (r == 0 || r == 1) {
                    chessboard[i][j] = '#';
                } else {
                    chessboard[i][j] = '_';
                }
            }
        }
        chessboard[i][16] = '\0';
    }

    for (int i = 0; i < 8; i++) {
        printf("%s\n", chessboard[i]);
    }
*/


/*
   BLOK 7: Dzielenie m przez 2, aż < 1 (do-while)

/*
    double m;

    printf("Podaj liczbe rzeczywista m:\n");
    scanf("%lf", &m);

    do {
        m = m / 2.0;
        printf("m = %lf\n", m);
    } while (m >= 1.0);
*/


/*
   BLOK 8: Suma elementów w tablicy int

/*
    int n;
    int tab[100];
    int suma = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
        suma = suma + tab[i];
    }

    printf("Suma elementow = %d\n", suma);
*/


/*
   BLOK 9: Licznik elementów dodatnich

/*
    int n;
    int tab[100];
    int licznik_dodatnich = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
        if (tab[i] > 0) {
            licznik_dodatnich++;
        }
    }

    printf("Liczba dodatnich = %d\n", licznik_dodatnich);
*/


/*
   BLOK 10: Sprawdzenie czy ciąg jest niemalejący

/*
    int n;
    int tab[100];
    int ok = 1;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        if (tab[i] > tab[i + 1]) {
            ok = 0;
        }
    }

    if (ok) {
        printf("ciag niemalejacy\n");
    } else {
        printf("ciag NIE jest niemalejacy\n");
    }
*/


    return 0;
}
