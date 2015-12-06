#include <stdio.h>
#include <stdlib.h>

int main () {

  int t, n, i, esp, ast, a, b;

  scanf ("%d", &t);

  for (t=t; t>0; t--){

    scanf ("%d", &n);

    if ((n % 2) != 0 && n > 2 && n < 100){
      
      for (b=2; b>0; b--){
        
        esp = n;
        
        if (b == 1){
          n = 3;
        }
        
        for (i=1; i<=n; i = i + 2){
  
          for (a=esp; a > 0; a--){
            printf(" ");
          }

          for (ast=0; ast < i; ast++){
            printf("*");
          }

          printf("\n");
        
          esp--;

        }
        
      }
      
      printf("\n");

    } else{
      printf("Foi digitado um número inválido\n");
    }
  }


  return 0;
}
