#include <stdio.h>
#include <stdlib.h>

int main(){
  int matriz[10], n;
  for(n=0; n < 10; n++){
    srand(time(NULL));
    matriz[n] = rand() % (1 - 100);
    printf("%d", matriz[n]);
    if(matriz[n] % 2 == 0){
      matriz[n] = rand() % (1 - 100); 
      n--;
    }
    }
    for(n = 0; n < 10; n++){
      printf("\nO numero na posição %d é %d", n+1,matriz[n]);
    }
  }
  return 0;
}