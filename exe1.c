#include <stdio.h>
#include <stdlib.h>

int main () {
    
    int n, i, h, soma;
    
    scanf("%d", &n);
    
    for (i=n - 1; i>0; i--){
        soma = 0;
        for (h=1; h<=i; h++){
            if ((i % h) == 0){
                soma = soma + h;
            }
        }
        if (soma == (i*2)){
            printf("%d ", i);
        }
    }    
    
	return 0;
}