#include <stdio.h>
#include <stdlib.h>

int main () {
    
    int vetor[15], i, f;
    
    for (i=0; i<15; i++){
        scanf("%d", &vetor[i]);
    }
    
    f = 1;
    
    for (i=0; i<7; i++){
        if (vetor[i] != vetor[14-i]){
            f = 0;
        }
    }
    
    for (i=0; i<15; i++){
        printf("%d ", vetor[i]);
    }
    
    if (f == 1){
        printf("\nO VETOR E UM PALINDROMO");
    } else {
        printf("\nO VETOR NAO E UM PALINDROMO");
    }
    
	return 0;
}