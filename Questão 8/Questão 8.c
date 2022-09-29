#include <stdio.h>
#include <math.h>  

//struct chamada Ponto, contendo apenas a posição x e y (inteiros)//
struct ponto {

  int x;

  int y;

};

// declaração de 2 pontos que irão ler a coordenadas x e y de cada ponto e calcular a distância entre eles//
int main(void) {
 
  // declaração de uma estrutura que contém dois dados numéricos reais, x e y//
  struct Coordenada { 
    double x; // -> double armazena números com ponto flutuante, com precisão dupla, ou seja normalmente possui o dobro da capacidade de uma variável do tipo float//
    double y;
    
  };
  // declaraçao da função que calcula a distancia entre duas coordenadas //
  
  	double distancia( struct Coordenada pontoA , struct Coordenada pontoB)  // Pow (variável, expoente)	potenciação, a função pow(x,y) retorna x^y//
{                                                                            
    return sqrt( pow(pontoA.x - pontoB.x,2) + pow(pontoA.y - pontoB.y, 2)); // -> srqt calcula raiz quadrada, funçao sqrt(x) retorna a raiz quadrada de x /
};
  
  // declaração das variáveis do programa principal //
  //O usuário irá definir a coordernada dos dois pontos e assim será gerado o resultado final//
  struct Coordenada umponto,outroponto;
  printf("Qual e a coordenada X do primeiro ponto:\n");
  scanf("%lf",&umponto.x);                              //Declaração da coodernada X e Y do primeiro ponto//
  printf("Qual e a coordenada Y do primeiro ponto:\n");
  scanf("%lf",&umponto.y);
  
  system("cls");
  
  printf("Qual e a coordenada X do segundo ponto:\n");
  scanf("%lf",&outroponto.x);                          //Declaração da coordernada X e Y do segundo ponto//
  printf("Qual e a coordenada Y do segundo ponto:\n");
  scanf("%lf",&outroponto.y);

  system("cls");

  printf("\nA distancia entre "); //Resultado entre os dois pontos//
  printf( "(%5.2f,%5.2f) e (%5.2f,%5.2f) e igual a %6.2f\n", umponto.x, umponto.y, outroponto.x, outroponto.y, distancia(umponto,outroponto));
 
  return 0;
}

