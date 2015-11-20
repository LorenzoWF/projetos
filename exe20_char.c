#include <stdio.h>
#include <stdlib.h>

int main (){
   
    int n, i, virg, tamanho, f; 
    char dolar[10], cents[2];
    
    scanf("%d", &n);
    
    for (n=n; n>0; n--){
        
        f = 0;
        
        __fpurge(stdin);
        fgets(dolar, 12, stdin);
        __fpurge(stdin);
        fgets(cents, 4, stdin);
        
        for (i=0; dolar[i] != '\n' && f == 0; i++){
            if (dolar[i] < 48 || dolar[i] > 57){
                f = 1;
            } 
        }
        
        for (virg=0; cents[virg] != '\n' && f == 0; virg++){
            if (cents[virg] < 48 || cents[virg] > 57){
                f = 1;
            }
        }
        
        if (f == 0 && virg < 3 && i < 10){
            virg = i % 3;
            tamanho = i;
        
            printf("$");
        
            for (i=0; i<tamanho; i++){
                if ((virg == 0 || virg == -3) && i != 0){
                    virg = 3;
                    printf(",");
                    i--;
                } else {
                    printf("%c", dolar[i]);
                    virg--;
                }
            }
        
            printf(".");
            if (cents[1] != '\n'){
                printf("%c%c", cents[0], cents[1]);
            } else{
                printf("0%c", cents[0]);
            }    
        } else{
            printf("ATENCAO! UM VALOR INVALIDO FOI DIGITADO, NAO SERA POSSIVEL MOSTRAR O VALOR FORMATADO CORRETAMENTE!");
        }
        
        printf("\n");
    }
    
    return 0;
}