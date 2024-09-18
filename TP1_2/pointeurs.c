#include <stdio.h>

void echangeContenu(int* a, int* b){
    int temp= *a;
    *a=*b;
    *b=temp;

    printf("les valeurs de a et b sont %d et %d",a,b);


}

int main(){
    int a=5;
    int b=6;

    echangeContenu(&a,&b);

}

