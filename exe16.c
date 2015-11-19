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
        for (i=0; linha[i] != '\n'; i++){
            if (linha[i] == 32){
                f = 0;
            } else{
                if (f == 0){
                    printf("%c", linha[i]);
                    f = 1;   
                }
            }
        }
        printf("\n");
    }
    
    return 0;
}