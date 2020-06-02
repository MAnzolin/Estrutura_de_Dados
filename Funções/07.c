#include<stdio.h>
int verifica(int s[],int n){
	for (int i=0;i<n-1;i++) 
        if(s[i]>s[i+1]) //Se o elemento atual for maior que o próximo retorna 0
            return 0;
	return 1;
}
int main(void){
	int n;
    printf("Entre com o tamanho da lista: ");
	scanf("%d",&n);
	while(n<1){
        printf("n>=1\n");
        scanf("%d",&n);
        }
	int v[n];
	for (int i=0;i<n;i++) {
		printf("%do numero: ",i+1);
		scanf(" %d",&v[i]);
	}
	printf("%d\n",verifica(v,n));
	return 0;
}