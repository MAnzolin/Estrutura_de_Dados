#include <stdio.h>
#include <stdlib.h>
int resp = 1;
typedef struct ponto{
    int x, y;
    struct ponto *proximo;
}t_ponto;

int main(int argc, char *argv[]){
    t_ponto * ini_ponto;
    t_ponto * proximo_ponto;

    ini_ponto = (t_ponto *)malloc(sizeof(t_ponto));
    if(ini_ponto == NULL) exit(1);
    proximo_ponto = ini_ponto;

    while(resp == 1){
        puts("Digite x:");
        scanf("%d",&proximo_ponto->x);
        puts("Digite y:");
        scanf("%d",&proximo_ponto->y);
        puts("Deseja continuar? <1> SIM | <outro valor> NAO");
        scanf("%d",&resp);
        if(resp == 1){
            proximo_ponto->proximo = (t_ponto *)malloc(sizeof(t_ponto));
            proximo_ponto = proximo_ponto->proximo;
        }
    }
    proximo_ponto->proximo = NULL;
    proximo_ponto = ini_ponto;

    while(proximo_ponto != NULL){
        printf("x: %d, y: %d\n", proximo_ponto->x,proximo_ponto->y);
        proximo_ponto = proximo_ponto->proximo;
    }
    return 0;
}