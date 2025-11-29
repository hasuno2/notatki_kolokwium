
#include <stdio.h>

int main(){
int x=5;
int *px=&x; // wskazuje na x

printf("x=%d addr=%p\n",x,(void*)&x); // normalnie

printf("*px=%d addr(px)=%p\n",*px,(void*)px); // przez wskaznik

*px = 20; // zmiana x przez wskaznik
printf("x po zmianie=%d\n", x);

int y=123;
px=&y; // teraz px na y
printf("y przez px=%d addr=%p\n", *px, (void*)px);

return 0;
}
