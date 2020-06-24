#include <stdio.h>
#include <stdlib.h>
#define tam 5
int i = 0;
int inversa(int L[], int I[]){
    if(L[tam-i]) I[i] = inversa(L[tam-i],I[i]);
    return I;
}

void exibe(int I[tam]){
    for(int i = 0;I[tam];i++){
        printf("valor %dº: %d\n",i,I[i]);
    }
}

int main(void){
    int L[tam] = {10, 20, 30, 40, 50};
    int I[tam] = {};
    exibe(inversa(L,I));
    return 0;
}