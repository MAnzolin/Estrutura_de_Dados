#include<stdio.h>
void exibe(int m[], int tam){
	printf("Matriz C = [");
	for (int i=0;i<tam;i++){
		printf("%d,",m[i]);
	}	
	printf("]\n");
}
int intercala(int a[],int m,int b[],int n){
	int c[m+n]; //Cria um vetor C com tamanho de A + B;
    int o=0, aux=0, tam;
	for( int i=0 ; i<m ; i++ ){
		for(int j=0+aux ; j<n ; j++){ //Uso esse auxiliar para não voltar a comparar com todos os elementos do 2o que podem já ter sido copiados.
			if( b[j] < a[i] ){ 
                c[o++] = b[j]; //Se eu copio o segundo vetor, tenho que continuar comparando o próximo do 2o com o 1o.
                aux++; 
            }
			else {
                c[o++]=a[i];
                break; //Se copio o primeiro vetor, posso dar break e passar para o próximo elemento deste.
            } 
		}
		if(aux==n) c[o++]=a[i];
	}
	if(aux<n) for(int j=0+aux;j<n;j++)c[o++]=b[j];
	tam=sizeof(c)/sizeof(c[1]);
	exibe(c,tam);
	return tam;
}
int main(void){
	int a[15]={1,3,5,7,9,11,13,15,17,19,21,23,25,27,29};
	int m=sizeof(a)/sizeof(a[0]); //Descobre o número de elementos do vetor a
	int b[14]={2,4,6,8,10,12,14,16,18,20,22,24,26,28};
	int n=sizeof(b)/sizeof(b[0]); //descobre o número de elementos do vetor b
	printf("Tamanho da nova matriz: %d\n",intercala(a,m,b,n));
return 0;}