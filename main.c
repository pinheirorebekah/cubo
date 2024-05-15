/******************************************************************************
*Trabalho Pratico: cubo de LEDs
*Authora: Rebekah Pinheiro 
*
*Data de avaliacao: 06/07/2023
*Descricao: seguir requisitos do guia do trabalho e observar ligacao eletrica
*no esquematico do Proteus ISIS entregue pelo professor.
*******************************************************************************/

#include "io430.h"
#include <stdlib.h>
#include "Cube.h"

//unsigned char seed; //possui lixo armazenado
//unsigned char n_rand; //global para ver o valor no proteus

int main( void )
{
  
  // Stop watchdog timer to prevent time out reset
  WDTCTL = WDTPW + WDTHOLD;
  
//  srand(seed); //inicializa o gerador de numeros randomicos com a semente
//  n_rand = rand(); //gera um numero randomico e o armazena
//  n_rand = n_rand%9; //limita o numero a 26
  
  Configura();
  
  while(1)
  {
    Sel_Mod();
  }
  

  return 0;
}
