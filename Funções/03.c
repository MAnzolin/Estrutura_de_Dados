#include<stdio.h>
/** Função palíndromo
 * A ideia é que eu inverta o número e faça uma comparação (Linha X) com o valor fornecido.
 * Utilizo resto da divisão por 10 para copiar o último dígito, e múltiplico por 10, para arrumar
 * as casas decimais.
*/
int palindromo(int n){
	int rev=0,aux=n ; //Trabalho com inteiros, para sempre pegar o valor inteiro das divisões.
	while( aux>0 ){
		rev *= 10; //Toda vez que eu pego o último dígito, como peguei o resto da divisão, faço x10 para arrumar a casa decimal.
		rev += aux%10; //Pego o resto da divisão por 10, para sempre pegar o último dígito
		aux /= 10; //Agora divido por 10 para eliminar o dígito que eu já copiei.
	}
	if( rev==n ) return 1; //comparto se valor invertido é igual.
	else return 0;
}
int main(void){
	int n=0;
	while(n<1){printf("Entre com um número >=1: ");scanf("%d",&n);}
	printf("%d\n",palindromo(n));
return 0;
}