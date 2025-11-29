
#include <stdio.h>

int main(){
    int tab[10];
    for(int i=0;i<10;i++) tab[i]=i;

    printf("&tab[0]=%p tab=%p\n",(void*)&tab[0],(void*)tab);

    printf("%d %d\n", tab[0], *tab); // to samo

    for(int i=1;i<10;i++){
        printf("i=%d addr1=%p addr2=%p\n",i,(void*)&tab[i],(void*)(tab+i));
        printf("val=%d val2=%d\n",tab[i],*(tab+i));
    }
}
