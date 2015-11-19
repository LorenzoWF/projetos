#include <stdio.h>
#include <stdlib.h>

int main (){
   
    int n, i, virg, tamanho; 
    char dolar[10], cents[2];
    
    scanf("%d", &n);
    
    for (n=n; n>0; i--){
        __fpurge(stdin);
        fgets(dolar, 11, stdin);
        __fpurge(stdin);
        fgets(cents, 3, stdin);
        
        i = 0;
        while (dolar[i] != '\n'){
            i++;
        }
        
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
        printf("\n");
    }
    
    return 0;
}