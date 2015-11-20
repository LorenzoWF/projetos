#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int n, i, p, inversor, a;
    char texto[50];
    
    scanf("%d", &n);
    
    for (n=n; n>0; n--){
         __fpurge(stdin);
        fgets(texto, 51, stdin);
        for(p=0; p<3; p++){
            if (p == 0){
                for (i=0; texto[i] != '\0'; i++){
                    if ((texto[i] >= 65 && texto[i] <= 90) || (texto[i] >= 97 && texto[i] <= 122)){
                        texto[i] = texto[i] + 3;
                    }
                }
            } else if (p == 1){
                i=0;
                
                while (texto[i] != '\n'){
                    i++;
                }
                
                inversor = i;
                
                for (i=0; i<(inversor/2); i++){
                    a = texto[i];
                    texto[i] = texto[inversor - i];
                    texto[inversor - i] = a;
                }
            } else{
                for (i=(inversor/2)+ 1; i<=inversor; i++){
                    texto[i] = texto[i] - 1;
                }
            }
        }
        
        printf("\n");
        
        for (i=0; texto[i] != '\0'; i++){
            printf("%c", texto[i]);
        }
    }
    
    return 0;
}