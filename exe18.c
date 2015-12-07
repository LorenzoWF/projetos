#include <stdio.h>
#include <stdlib.h>

int main () {

  int t, n, i, esp, ast, a, b; // t = numero de testes / n = tamanho da arvore / i = numero de ast. por linha / esp = espacos / ast = qnt. asteriscos na linha final / a = auxiliar para looping dos espacos / b = auxiliar para adicionar a arvore de 3 ast, em baixo da arvore principal

  scanf ("%d", &t); // lendo o numero de testes

  for (t=t; t>0; t--){

    scanf ("%d", &n); // lendo o tamanho da arvore

    if ((n % 2) != 0 && n > 2 && n < 100){ // condicao para que de certo a arvore
      
      for (b=2; b>0; b--){ // looping para desenhar duas arvores, uma com o tamanho "n" lido anteriormente e outro com o tamanho "3"
        
        esp = n; // o numero de espacos vai ser igual ao numero lido, "n"
        
        if (b == 1){ // quando b = 1, ou seja, na segunda volta, a arvore principal ja vai estar desenha, atribuimos 3 ao "n" para desenhar a outra arvore em baixo
          n = 3;
        }
        
        for (i=1; i<=n; i = i + 2){ // i = numero de asteriscos que vai ser imprimido, comeca com 1 vai aumentando de dois em dois, 1 3 5 7 ...
  
          for (a=esp; a > 0; a--){ // a = esp, pos o a vai ser a quantidade de espacos por linha
            printf(" "); // espaco
          }

          for (ast=0; ast < i; ast++){ // ast = 0, ele vai imprimir os asteriscos enquanto for menor do que o i
            printf("*");
          }

          printf("\n"); // enter para a proxima linha
        
          esp--; // decrementamos o espaco para formar a arvore

        }
        
      }
      
      printf("\n"); // espaco para formar a arvore secundaria, a 3 asteriscos

    } else{
      printf("Foi digitado um número inválido\n"); // se o usuario digitar um numero invalido, ele vai nesse else
    }
  }


  return 0;
}
