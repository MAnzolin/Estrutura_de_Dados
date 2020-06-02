#include<stdio.h>
void troca(int *a, int *b){ //ponteiros recebem endereços para poder fazer alterações
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}
void ordena(int s[],int n){
	for (int i=1;i<n;i++) 
		for (int j=0;j<n-i;j++)
			if(s[j]>s[j+1]) troca(&s[j],&s[j+1]); //se o elemento atual for maior que o próximo, trocam de posições.
}       
int exibe(int v[], int n){
	for (int i=0;i<n;i++){
		printf("%d,",v[i]);
	}
}
int main(void){
	int n,maior;
	scanf("%d",&n);
	while(n<1){printf("n>=1\n");scanf("%d",&n);}
	int v[n];
	for (int i=0;i<n;i++) {
		printf("%do numero: ",i+1);
		scanf(" %d",&v[i]);
	}
	ordena(v,n);
	exibe(v,n);
    puts("\nfim");
	return 0;
}