#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int n, i, soma, mul, divisao, aux, f, total_1, total_2; 
    char nome[10];
    
    scanf("%d", &n);
    if (n > 0 && n < 100000){
        do {
            
            int vSoma[n];
            char vNome[n][12];
            f = 0;
            for (aux=0; aux<n && f == 0; aux++){
                soma = 0;
                __fpurge(stdin);
                fgets(nome, 12, stdin);
                
                if (nome[0] < 65 || nome[0] > 90){
                    f = 2;
                } 
                
                if (aux > 0 && f == 0){
                    f = 2;
                    for (i=0; nome[i] != '\n' && f == 2; i++){
                        if (nome[i] > vNome[aux - 1][i]){
                            f = 0;   
                        }
                    }
                }
                
                for (i=0; nome[i] != '\n' && f == 0; i++){
                    soma = soma + nome[i];
                    vNome[aux][i] = nome[i];
                }
                
                vSoma[aux] = soma;
                vNome[aux][i] = '\n';
            }
            
            divisao = 0;
            
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
            } else if (f == 2){
                printf("Entrada Invalida, digite o numero de estudantes novamente!");
            }
            
            printf("\n");
            
            scanf(" %d", &n);
        } while (n > 0 && n < 100000);   
    }
    
    return 0;
}