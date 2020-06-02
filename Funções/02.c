#include<stdio.h>
int main(void){
	int p,q,aux=0;
    printf("Digite um número inteiro: ");
	scanf("%d",&p);
    printf("Digite um divisor para esse número: ");
	scanf("%d",&q);
	do{
		p-=q;
		aux++;
	}while(p>=q);
	printf("Resultado: %d\nResto: %d\n",aux,p);
return 0;}