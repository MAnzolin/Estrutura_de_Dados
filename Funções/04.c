#include<stdio.h>
#include<string.h>
int busca(char c,char s[]){
        for ( int i=0;s[i];i++ )
            {
                if ( s[i] != c ) {
                    printf("%c != %c\n",s[i],c);
                }
                else { // Caso seja igual, retorna 1 e já termina a função
                    printf("%c = %c\n",s[i],c); 
                    return 1;
                }
            }
    return 0;
}
int main(void){
        char s[52],ch;
        printf("Entre com uma string: ");
        scanf("%s",s);
        printf("Digite um caractere para buscar na string: ");
        scanf(" %c",&ch);
        printf("%d\n",busca(ch,s));
return 0;
}
