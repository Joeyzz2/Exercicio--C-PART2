#include <stdio.h>
#include <stdlib.h>

int main(){
   double array[5];
   int i;
   //n�mero de valores que devem ser solicitados pelo usu�rio//
   for ( i = 0; i <= 4; i++ ) {
      printf("Entre com o %d escolhido:\n", i+1);
      scanf("%lf", &array[i]);
   }
   //Mostrando na tela os n�meros armazenadas //
   for (i = 0; i <=4; i++ ) {
      printf("Numero %d = %lf\n", i+1, array[i]);
   }
   return 0;
}
