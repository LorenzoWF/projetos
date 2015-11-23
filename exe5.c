#include <stdio.h>
#include <stdlib.h>

int main () {
    
    int vetor[20], i, a, f;
      
    for (i=0; i<20; i++){
        scanf("%d", &vetor[i]);
    }
    
      
    for (i=0; i<20; i++){
        if (i == 0){
            printf("%d ", vetor[i]);
        } else{
            f = 1;
            for (a = (i - 1); a>=0; a--){
                if (vetor[i] == vetor[a]){
                    f = 0;
                }
            }
            if  (f == 1){
                printf("%d ", vetor[i]);    
            }
        }
    }
    
	return 0;
}