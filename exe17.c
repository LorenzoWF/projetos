#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int n, i, h, soma, mul, divisao, aux, f, total_1, total_2; 
    char nome[10];
    
    scanf("%d", &n);
    if (n > 0){
        do {
            
            int vSoma[n];
            char vNome[n][12];
            h = 0;
            
            for (aux=0; aux<n; aux++){
                soma = 0;
                __fpurge(stdin);
                fgets(nome, 12, stdin);
                for (i=0; nome[i] != '\n'; i++){
                    soma = soma + nome[i];
                    vNome[h][i] = nome[i];
                }
                vSoma[aux] = soma;
                vNome[h][i] = '\n';
                h++;
            }
            
            divisao = 0;
            f = 0;
            
            for (divisao=divisao; divisao < n && f == 0; divisao++){
                
                aux = divisao;
                mul = 1;
                total_1 = 0;
                
                while (aux >= 0){
                    total_1 = total_1 + (vSoma[aux] * mul);
                    mul++;
                    aux--;
                }
                
                aux = divisao + 1;
                mul = 1;
                total_2 = 0;
                
                while (aux < n){
                    total_2 = total_2 + (vSoma[aux] * mul);
                    mul++;
                    aux++;
                }
                  
                if (total_1 == total_2){
                    f = 1;
                    for (i=0; vNome[divisao][i] != '\n'; i++){
                        printf("%c", vNome[divisao][i]);   
                    }
                }
            }
            
            if (f == 0){
                printf("Impossibilidade de empate.");
            }
            
            printf("\n");
            
            scanf(" %d", &n);
        } while (n > 0);   
    }
    
    return 0;
}