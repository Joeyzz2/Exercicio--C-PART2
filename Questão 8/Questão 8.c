#include <stdio.h>
#include <math.h>  

//struct chamada Ponto, contendo apenas a posi��o x e y (inteiros)//
struct ponto {

  int x;

  int y;

};

// declara��o de 2 pontos que ir�o ler a coordenadas x e y de cada ponto e calcular a dist�ncia entre eles//
int main(void) {
 
  // declara��o de uma estrutura que cont�m dois dados num�ricos reais, x e y//
  struct Coordenada { 
    double x; // -> double armazena n�meros com ponto flutuante, com precis�o dupla, ou seja normalmente possui o dobro da capacidade de uma vari�vel do tipo float//
    double y;
    
  };
  // declara�ao da fun��o que calcula a distancia entre duas coordenadas //
  
  	double distancia( struct Coordenada pontoA , struct Coordenada pontoB)  // Pow (vari�vel, expoente)	potencia��o, a fun��o pow(x,y) retorna x^y//
{                                                                            
    return sqrt( pow(pontoA.x - pontoB.x,2) + pow(pontoA.y - pontoB.y, 2)); // -> srqt calcula raiz quadrada, fun�ao sqrt(x) retorna a raiz quadrada de x /
};
  
  // declara��o das vari�veis do programa principal //
  //O usu�rio ir� definir a coordernada dos dois pontos e assim ser� gerado o resultado final//
  struct Coordenada umponto,outroponto;
  printf("Qual e a coordenada X do primeiro ponto:\n");
  scanf("%lf",&umponto.x);                              //Declara��o da coodernada X e Y do primeiro ponto//
  printf("Qual e a coordenada Y do primeiro ponto:\n");
  scanf("%lf",&umponto.y);
  
  system("cls");
  
  printf("Qual e a coordenada X do segundo ponto:\n");
  scanf("%lf",&outroponto.x);                          //Declara��o da coordernada X e Y do segundo ponto//
  printf("Qual e a coordenada Y do segundo ponto:\n");
  scanf("%lf",&outroponto.y);

  system("cls");

  printf("\nA distancia entre "); //Resultado entre os dois pontos//
  printf( "(%5.2f,%5.2f) e (%5.2f,%5.2f) e igual a %6.2f\n", umponto.x, umponto.y, outroponto.x, outroponto.y, distancia(umponto,outroponto));
 
  return 0;
}

