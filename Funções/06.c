#include<stdio.h>
void maior(int A[], int n){
    int maior = A[0];
    exibe(A,n); //Exibe vetor antes
    for(int j=0;j<n;j++) 
        A[j] = 0;
	exibe(A,n);
}
void exibe(int VETOR[], int n){
    printf("[");
    for(int j=0; j<n ;j++) 
        printf(" %d,", VETOR[j]);
	printf("]\n");
}
int main(void){
	int n;
    printf("Entre com o tamanho do vetor: ");
	scanf("%d",&n);
	while(n<1){ //Vetor deve necessariamente ser > 0;
        printf("n>=1\n");
        scanf("%d",&n);
    }
	int v[n];
    for ( int i=0; i<n ; i++ ) {
		printf("%do numero: ",i+1);
		scanf(" %d",&v[i]);
    }
    maior(v,n);
return 0;
}