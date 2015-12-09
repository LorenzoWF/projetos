#include <stdio.h>
#include <stdlib.h>

int main () {

  char l1[60], l2[60];
  
  int i, p, cpf, real, ponto, cents, num, divisor;
  double soma1, soma2, somaf;
  
  __fpurge(stdin);
  fgets(l1, 61, stdin);
  __fpurge(stdin);
  fgets(l2, 61, stdin);
  
  cpf = 0;
  
  for (i=0; cpf < 11; i++){
  
    if (l1[i] < 58 && l1[i] > 47 && cpf < 11){
      printf("%c", l1[i]);
      cpf++;
    } 
  
  }
  
  printf("\n\n");

  ponto = 0;
  real = 0;
  
  for (p=i; l1[p] != '\n' && ponto == 0; p++){
    
    if (l1[p] < 58 && l1[p] > 47 ){
      real++;
    } else if (l1[p] == '.'){
      ponto = 1;
    }
  
  }
  
  divisor = 1;
  
  for (p=0; p < real - 1; p++){
    divisor = divisor * 10;
  }
  
  cents = 0;
  soma1 = 0.0;
  ponto = 0;
  
  for (p=i; l1[p] != '\n' && cents < 2; p++){
    
    if (l1[p] < 58 && l1[p] > 47 ){

      if (ponto == 1){
        if (cents == 0){
          soma1 = soma1 + (l1[p] - 48) / 10.0; 
        } else{
          soma1 = soma1 + (l1[p] - 48) / 100.0;
        }
        cents++;
      } else{
        num = (l1[p] - 48) * divisor;
        soma1 = soma1 + num;
        divisor = divisor / 10;
      }
      
    } else if (l1[p] == '.'){
      ponto = 1;
    }
  
  }
  
  i = 0;
  
  ponto = 0;
  real = 0;
  
  for (p=i; l2[p] != '\n' && ponto == 0; p++){
    
    if (l2[p] < 58 && l2[p] > 47 ){
      real++;
    } else if (l2[p] == '.'){
      ponto = 1;
    }
  
  }

  divisor = 1;
  
  for (p=0; p < real - 1; p++){
    divisor = divisor * 10;
  }
  
  cents = 0;
  soma2 = 0.0;
  ponto = 0;
  
  for (p=i; l2[p] != '\n' && cents < 2; p++){
    
    if (l2[p] < 58 && l2[p] > 47 ){

      if (ponto == 1){
        if (cents == 0){
          soma2 = soma2 + (l2[p] - 48) / 10.0; 
        } else{
          soma2 = soma2 + (l2[p] - 48) / 100.0;
        }
        cents++;
      } else{
        num = (l2[p] - 48) * divisor;
        soma2 = soma2 + num;
        divisor = divisor / 10;
      }
      
    } else if (l2[p] == '.'){
      ponto = 1;
    }
  
  }
  
  somaf = soma1 + soma2;
  
  printf("%0.2f", somaf);
  
  return 0;
  
}
