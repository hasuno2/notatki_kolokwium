
#include <stdio.h>

void cyclic_swap(float *a, float *b, float *c){
    float t=*a;
    *a=*c;
    *c=*b;
    *b=t; // zwykla rotacja
}

int main(){
    float x=3.45, y=5.63, z=-66.54;
    cyclic_swap(&x,&y,&z);
    printf("%f %f %f\n",x,y,z);
}
