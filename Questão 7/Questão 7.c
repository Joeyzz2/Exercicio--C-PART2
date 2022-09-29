#include <stdio.h>
#include <stdlib.h>

int main(){
   double array[5];
   int i;
   //número de valores que devem ser solicitados pelo usuário//
   for ( i = 0; i <= 4; i++ ) {
      printf("Entre com o %d escolhido:\n", i+1);
      scanf("%lf", &array[i]);
   }
   //Mostrando na tela os números armazenadas //
   for (i = 0; i <=4; i++ ) {
      printf("Numero %d = %lf\n", i+1, array[i]);
   }
   return 0;
}
