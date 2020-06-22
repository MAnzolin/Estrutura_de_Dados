#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

typedef int bool;
typedef int TIPOCHAVE;
typedef struct aux{
    TIPOCHAVE chave;
    /*Dados armazenados irão aqui*/
    struct aux *esq, *dir;
}NO;

typedef NO* PONT;

PONT inicializa(){
    return(NULL);
}

PONT adiciona(PONT raiz, PONT no){
    if(raiz == NULL) return(no);
    if(no->chave < raiz->chave)raiz->esq =  adiciona(raiz->esq,no);
    else raiz->dir = adiciona(raiz->dir,no);
    return(raiz);
} 

PONT criaNovoNo(TIPOCHAVE ch){
    PONT novoNo = (PONT)malloc(sizeof(NO));
    novoNo -> esq = NULL;
    novoNo -> dir = NULL;
    novoNo -> chave = ch;
    return(novoNo);
}

PONT contem(TIPOCHAVE ch, PONT raiz){
    if(raiz == NULL) return(NULL);
    if(raiz -> chave == ch) return(raiz);
    if(raiz->chave > ch) return (contem(ch,raiz->esq));
    return(contem(ch,raiz->dir));
}

int numeroNos(PONT raiz){
    if(!raiz) return 0;
    return(numeroNos(raiz->esq) + 1 + numeroNos(raiz->dir));
}

int main(){
    PONT r = inicializa();
    PONT i_no = criaNovoNo(23);
    PONT ii_no = criaNovoNo(8);
    PONT iii_no = criaNovoNo(12);
    PONT iv_no = criaNovoNo(25);
    PONT v_no = criaNovoNo(5);
    adiciona(r, i_no);
    adiciona(r, ii_no);
    adiciona(r, iii_no);
    adiciona(r, iv_no);
    adiciona(r, v_no);
    printf("\nvalor: %d\n",numeroNos(r));
    printf("contem 12 na arvore? %d\n",contem(12,r));
}