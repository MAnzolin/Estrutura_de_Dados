#include<stdio.h>
int impar(int n){
        if (n%2!=0) return 1;
        return 0;
}
int main(void){
        int n;
        printf("Entre com um número inteiro: ");
        scanf("%d",&n);
        while(n<1) scanf("%d",&n);
            printf("%d\n",impar(n));
        return 0;
}