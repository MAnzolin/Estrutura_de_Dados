#include<stdio.h>
int maior(int A[], int n){
    int maior = A[0];
    for(int j=1; j<n ; j++) 
        if(A[j]>maior) 
            maior=A[j];
return maior;
}
int main(void){
        int n;
        printf("Entre com o tamanho do Vetor: ");
        scanf("%d",&n);
        while(n<1){printf("n>=1\n");scanf("%d",&n);}
        int v[n];
        for (int i=0;i<n;i++) {
                printf("%do numero: ",i+1);
                scanf(" %d",&v[i]);
        }
        printf("%d\n",maior(v,n));
return 0;
}
