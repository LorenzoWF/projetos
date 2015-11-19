#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int n, i, f;
    
    char linha[50];
    
    scanf ("%d", &n);
    
    for (n=n; n>0; n--){
        __fpurge(stdin); // ESTAVA UTILIZANDO UMA MAQUINA VIRTUAL LINUX PARA COMPILAR OS ALGORITMOS, ESSA FUNCAO NO WINDOWS E A FFLUSH, POR FAVOR SUBSTITUA ELA PARA REALIZAR OS TESTES
        fgets(linha, 51, stdin);
        f = 0;
        for (i=0; linha[i] != '\n' && f < 2; i++){
            if (linha[i] == 32){
                f = 0;
            } else{
                if (f == 0){
                    if (linha[i] < 97 || linha[i] > 122){ // O a NA TABELA ASCII E O 97 E O z E O 122
                        f = 2;
                    } else{
                        printf("%c", linha[i]);
                        f = 1;   
                    }
                }
            }
        }
        if (f == 2){
            printf("\nATENCAO, FOI DIGITADO UM CARACTER INVALIDO NA LINHA ACIMA, POR ISSO A MESNGAEM NAO PODE SER CODIFICADA POR COMPLETA"); 
        } else {
            printf("\n");   
        }
    }
    
    return 0;
}