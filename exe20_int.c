#include <stdio.h>
#include <stdlib.h>

int main (){
   
    int n, d, c, divisor, i, a, h, digitos, dolar[14], virg; 
    
    scanf("%d", &n);
    
    for (n=n; n>0; n--){
        scanf("%d", &d);
        scanf("%d", &c);
        
        if (d >= 0 && d <= 100000000 && c >= 0 && c <= 99){
            a = d;
            for (digitos=0; a != 0; digitos++){
                a = a / 10;
            }
            
            a = digitos + (digitos / 3);
            
            if (digitos % 3 == 0){
                digitos = a - 1;
            } else{
                digitos = a;
            }
            
            a = -1;
            virg = 3;
            for (i=0; i<digitos; i++){
                if (i == virg){
                    dolar[i] = -1;
                    a++;
                    virg = virg + 4;
                } else{
                    divisor = 1;
                    for (h=a; h<i; h++){
                        divisor = divisor * 10;
                    }
                    
                    dolar[i] = (d % divisor) / (divisor / 10);
                }
            }
            
            printf("$");
            for(i=i - 1; i>=0; i--){
                if (dolar[i] == -1){
                    printf(",");
                } else{
                    printf("%d", dolar[i]);
                }
            }
            
            printf(".");
            if (c < 10){
                printf("0%d", c);
            } else{
                printf("%d", c);
            }
        } else{
            printf("O NUMERO DIGITADO E INVALIDO E NAO PODERA SER FORMATADO");
        }
        printf("\n");
    }
    
    return 0;
}