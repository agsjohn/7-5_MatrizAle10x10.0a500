#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ALE 301
#define MAX 10

main(){
  int c, l, m[MAX][MAX], cont;
  int x;
  srand(time(NULL));
  for(l = 0; l < MAX; l++){
    for(c = 0; c < MAX; c++){
      do{
        m[l][c] = rand() % ALE;
      }while(m[l][c] < 100);
    }
  }
  printf("\nMatriz: \n");
  for (l = 0; l < MAX; l++) {
    for (c = 0; c < MAX; c++) {
     if (c < MAX - 1) {
        printf("%i - ", m[l][c]);
      }
      else{
        printf("%i\n", m[l][c]);
      }
    }
  }
  do{
    cont = 0;
    printf("Digite um número positivo para realizar a busca ou um número negativo para encerrar o programa: ");
    scanf("%i", &x);
    if(x >= 0){
      for(l = 0; l < MAX; l++){
        for(c = 0; c < MAX; c++){
          if(m[l][c] == x){
            cont++;
          }
        }
      }
      if(cont > 1){
        printf("Número encontrado %i vezes", cont);
      }
      else if(cont == 1){
        printf("Número encontrado %i vez", cont);
      }
      else{
        printf("Número não encontrado");
      }
      printf("\n\n");
    }
  }while(x >= 0);
}