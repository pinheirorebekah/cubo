/**
 *******************************************************************************
 * File Name                   : Cube.h
 * Dependencias                : iar
 * Processador                 : msp430
 * Copyright                   : Rebekah 
 *******************************************************************************
 * Versions                    :
 * Description                 :
 *******************************************************************************
 */
#include "io430.h"
#include "Cube.h"

/*------------------------------------------------------------------------------
NOME:	   void Configura (void)
DESCRICAO: Configurar os dipswtchs como entrada, as linhas e colunas e como saídas.
ENTRADA:   -
SAIDA:	   -
-----------------------------------------------------------------------------*/
void Configura (void){
  
  P1DIR &=0X04;        //Configurar os Dipswtchs como entrada
  P3DIR |=0X01;        //Configurar linha 9 como saída
  P2DIR |=0XFF;        //Configurar os linhas (1 a 8) como saída
  P4DIR |=0X07;        //Configurar as colunas como saída
}
/*------------------------------------------------------------------------------
NOME:	   void Sel_Mod()
DESCRICAO: Seleção de modo de funcionamento.
ENTRADA:   -
SAIDA:	   -
-----------------------------------------------------------------------------*/
void Sel_Mod(){
  switch(M0_M1){
  case 0x00:
    Mod_0();
    break;
  case 0x01:
    Mod_1();
    break;
  case 0x02:
    Mod_2();
    break;
  case 0x03:
    Mod_3();
    break;
  }
  return;
}
/*------------------------------------------------------------------------------
NOME:	   void Mod_0(void)
DESCRICAO: Vamos apagar tudo para começarmos, e deve acender 1 led de cada vez, 
           tendo 27 leds, ou seja 27 casos. 
ENTRADA:   -
SAIDA:	   -
-----------------------------------------------------------------------------*/ 
void Mod_0(void){
    Coluna_1=0;
    Coluna_2=0;
    Coluna_3=0;              
    Linha_1=0;                //LINHAS Apagadas
    Linha_2=0;
    Linha_3=0;
    Linha_4=0;
    Linha_5=0;
    Linha_6=0;
    Linha_7=0;
    Linha_8=0;
    Linha_9=0;
  
  switch(Entrada){
  case 0X00:                    //TODOS OS LEDS APAGADOS    
    Coluna_1=0;
    Coluna_2=0;
    Coluna_3=0;
    Linha_1=0;                  //LINHAS Apagadas
    Linha_2=0;
    Linha_3=0;
    Linha_4=0;
    Linha_5=0;
    Linha_6=0;
    Linha_7=0;
    Linha_8=0;
    Linha_9=0;
    break;
  case 0X08:                   //ACENDE LED 1
    Coluna_1=1;
    Linha_1=1;  
    __delay_cycles(200000);
    break;
  case 0X10:                   //ACENDE LED 2
    Coluna_2=1;
    Linha_1=1;
    __delay_cycles(200000);
    break;
  case 0X18:                   //ACENDE LED 3
    Coluna_3=1;
    Linha_1=1;
    __delay_cycles(200000);
    break;
  case 0X20:                   //ACENDE LED 4
    Coluna_1=1;
    Linha_2=1;
    __delay_cycles(200000);
    break;
  case 0X28:                   //ACENDE LED 5
    Coluna_2=1;
    Linha_2=1;
    __delay_cycles(200000);
    break;
  case 0X30:                   //ACENDE LED 6
    Coluna_3=1;
    Linha_2=1;
    __delay_cycles(200000);
    break;
  case 0X38:                   //ACENDE LED 7
    Coluna_1=1;
    Linha_3=1;
    __delay_cycles(200000);
    break;
  case 0X40:                   //ACENDE LED 8
    Coluna_2=1;
    Linha_3=1;
    __delay_cycles(200000);
    break;
  case 0X48:                   //ACENDE LED 9
    Coluna_3=1;       
    Linha_3=1;
    __delay_cycles(200000);
    break;
  case 0X50:                   //ACENDE LED 10
    Coluna_1=1;       
    Linha_4=1;
    __delay_cycles(200000);
    break;
  case 0X58:                   //ACENDE LED 11
    Coluna_2=1;       
    Linha_4=1;
    __delay_cycles(200000);
    break;
  case 0X60:                   //ACENDE LED 12
    Coluna_3=1;        
    Linha_4=1;
    __delay_cycles(200000);
    break;
  case 0X68:                   //ACENDE LED 13
    Coluna_1=1;       
    Linha_5=1;
    __delay_cycles(200000);
    break;
  case 0X70:                   //ACENDE LED 14
    Coluna_2=1;       
    Linha_5=1;
    __delay_cycles(200000);
    break;
  case 0X78:                   //ACENDE LED 15
    Coluna_3=1;       
    Linha_5=1;
    __delay_cycles(200000);
    break;
  case 0X80:                   //ACENDE LED 16
    Coluna_1=1;       
    Linha_6=1;
    __delay_cycles(200000);
    break;
  case 0X88:                   //ACENDE LED 17
    Coluna_2=1;       
    Linha_6=1;
    __delay_cycles(200000);
    break;
  case 0X90:                   //ACENDE LED 18
    Coluna_3=1;       
    Linha_6=1;
    __delay_cycles(200000);
    break;
  case 0X98:                   //ACENDE LED 19
    Coluna_1=1;       
    Linha_7=1;
    __delay_cycles(200000);
    break;
  case 0XA0:                   //ACENDE LED 20
    Coluna_2=1;       
    Linha_7=1;
    __delay_cycles(200000);
    break;
  case 0XA8:                   //ACENDE LED 21
    Coluna_3=1;       
    Linha_7=1;
    __delay_cycles(200000);
    break;
  case 0XB0:                   //ACENDE LED 22
    Coluna_1=1;          
    Linha_8=1;
    __delay_cycles(200000);
    break;
  case 0XB8:                   //ACENDE LED 23
    Coluna_2=1;       
    Linha_8=1;
    __delay_cycles(200000);
    break;
  case 0xC0:                   //ACENDE LED 24
    Coluna_3=1;       
    Linha_8=1;
    __delay_cycles(200000);
    break;
  case 0XC8:                   //ACENDE LED 25
    Coluna_1=1;       
    Linha_9=1;
    __delay_cycles(200000);
    break;
  case 0XD0:                   //ACENDE LED 26
    Coluna_2=1;       
    Linha_9=1;
    __delay_cycles(200000);
    break;
  case 0xD8:                   //ACENDE LED 27
    Coluna_3=1;       
    Linha_9=1;
    __delay_cycles(200000);
    break;
  default:                      //CASO NÚMEROS MAIORES QUE 27, TODOS OS LED's
                                //ACESSOS
    Coluna_1=1;
    Coluna_2=1;
    Coluna_3=1;              
    Linha_1=1;                  //LINHAS ACESSAS
    Linha_2=1;
    Linha_3=1;
    Linha_4=1;
    Linha_5=1;
    Linha_6=1;
    Linha_7=1;
    Linha_8=1;
    Linha_9=1;
    __delay_cycles(200000);
    break;
    
  }
}
/*------------------------------------------------------------------------------
NOME:	   void Mod_1(void)
DESCRICAO: Gera um número randômico(aleatório). Vai gerar uma sequência e armazenar.
ENTRADA:   -
SAIDA:	   -
-----------------------------------------------------------------------------*/
void Mod_1(void){
//  unsigned char seed;                 //possui lixo armazenado
  unsigned char n_rand;                 //global para ver o valor no proteus
  srand(Entrada);                       //inicializa o gerador de numeros randomicos com a semente
  n_rand = rand();                      //gera um numero randomico e o armazena
  n_rand = n_rand%9;                    //limita o numero a 9
  Coluna_1=0;
    Coluna_2=0;
    Coluna_3=0;              
    Linha_1=0;                          //LINHAS apagadas
    Linha_2=0;
    Linha_3=0;
    Linha_4=0;
    Linha_5=0;
    Linha_6=0;
    Linha_7=0;
    Linha_8=0;
    Linha_9=0; 
  switch(n_rand){
  case 0x01:
    Coluna_1=1; 
    Linha_1=1;
    Linha_4=1;
    Linha_7=1;
    __delay_cycles(200000);
    break;
  case 0x02:
    Coluna_1=1; 
    Linha_2=1;
    Linha_5=1;
    Linha_8=1;
    __delay_cycles(200000);
    break;
  case 0x03:
    Coluna_1=1; 
    Linha_3=1;
    Linha_6=1;
    Linha_9=1;
    __delay_cycles(200000);
    break;
  case 0x04:
    Coluna_2=1; 
    Linha_1=1;
    Linha_4=1;
    Linha_7=1;
    __delay_cycles(200000);
    break;
  case 0x05:
    Coluna_2=1; 
    Linha_2=1;
    Linha_5=1;
    Linha_8=1;
    __delay_cycles(200000);
    break;
  case 0x06:
    Coluna_2=1; 
    Linha_3=1;
    Linha_6=1;
    Linha_9=1;
    __delay_cycles(200000);
    break;
  case 0x07:
    Coluna_3=1; 
    Linha_1=1;
    Linha_4=1;
    Linha_7=1;
    __delay_cycles(200000);
    break;
  case 0x08:
    Coluna_3=1; 
    Linha_2=1;
    Linha_5=1;
    Linha_8=1;
    __delay_cycles(200000);
    break;
  case 0x09:
    Coluna_3=1; 
    Linha_3=1;
    Linha_6=1;
    Linha_9=1;
    __delay_cycles(200000);
    break;
    
  }
}
/*------------------------------------------------------------------------------
NOME:	   void Mod_2(void)
DESCRICAO: Sequência infinita a ser seguida, onde nesse modo iremos DEFINIR a ordem
           em que as colunas vão ser ligadas, ordem crescente. 
ENTRADA:   -
SAIDA:	   -
-----------------------------------------------------------------------------*/
void Mod_2(void){
  Linha_1=1;                            //ACENDE linha 1
  Coluna_1=1;            
  Coluna_2=1;             
  Coluna_3=1;            
  __delay_cycles(200000);
  
  Linha_1=0;                             //APAGA linha 1
  Coluna_1=0;             
  Coluna_2=0;                       
  Coluna_3=0;                   
  
  Linha_2=1;                            //ACENDE linha 2
  Coluna_1=1;            
  Coluna_2=1;           
  Coluna_3=1;
  __delay_cycles(200000);
  
  Linha_2=0;                            //APAGA  linha 2
  Coluna_1=0;                      
  Coluna_2=0;                      
  Coluna_3=0;         
  
  Linha_3=1;                            //ACENDE linha 3
  Coluna_1=1;            
  Coluna_2=1;           
  Coluna_3=1;
  __delay_cycles(200000);
    
  Linha_3=0;                            //APAGA linha 3
  Coluna_1=0;                      
  Coluna_2=0;                      
  Coluna_3=0;           
  
  Linha_4=1;                            //ACENDE linha 4
  Coluna_1=1;            
  Coluna_2=1;           
  Coluna_3=1;
  __delay_cycles(200000);
  
  Linha_4=0;                            //APAGA linha 4
  Coluna_1=0;                      
  Coluna_2=0;                      
  Coluna_3=0;           
  
  Linha_5=1;                            //ACENDE linha 5
  Coluna_1=1;            
  Coluna_2=1;           
  Coluna_3=1;
  __delay_cycles(200000);
  
  Linha_5=0;                            //APAGA  linha 5
  Coluna_1=0;                      
  Coluna_2=0;                      
  Coluna_3=0;          
  
  Linha_6=1;                            //ACENDE linha 6
  Coluna_1=1;            
  Coluna_2=1;           
  Coluna_3=1;
  __delay_cycles(200000);
  
  Linha_6=0;                            //APAGA linha 6
  Coluna_1=0;                      
  Coluna_2=0;                      
  Coluna_3=0;           
  
  Linha_7=1;                            //ACENDE linha 7
  Coluna_1=1;            
  Coluna_2=1;           
  Coluna_3=1;
  __delay_cycles(200000);
  
  Linha_7=0;                            //APAGA linha 7
  Coluna_1=0;                      
  Coluna_2=0;                      
  Coluna_3=0;          
  
  Linha_8=1;                            //ACENDE linha 8
  Coluna_1=1;            
  Coluna_2=1;           
  Coluna_3=1;
  __delay_cycles(200000);
  
  Linha_8=0;                            //APAGA linha 8
  Coluna_1=0;                      
  Coluna_2=0;                      
  Coluna_3=0;           
  
  Linha_9=1;                            //ACENDE linha 9
  Coluna_1=1;            
  Coluna_2=1;           
  Coluna_3=1;
  __delay_cycles(200000);
  
  Linha_9=0;                            //APAGA linha 9
  Coluna_1=0;                      
  Coluna_2=0;                      
  Coluna_3=0;           
  
}

/*------------------------------------------------------------------------------
NOME:	   void Mod_3(void)
DESCRICAO: Irá ficar piscando os LED's das colunas das pontas e girando em círculo.
ENTRADA:   -
SAIDA:	   -
-----------------------------------------------------------------------------*/
void Mod_3(void){ 
  Coluna_1=0;
    Coluna_2=0;
    Coluna_3=0;              
    Linha_1=0;                //LINHAS apagadas
    Linha_2=0;
    Linha_3=0;
    Linha_4=0;
    Linha_5=0;
    Linha_6=0;
    Linha_7=0;
    Linha_8=0;
    Linha_9=0;
    __delay_cycles(500000);
    
  Coluna_1=1;                     
  Linha_1=1;
  Linha_2=1;
  Linha_3=1;
  Linha_7=1;
  Linha_8=1;
  Linha_9=1;
  __delay_cycles(50000000);
  
  Coluna_1=0;                     
  Linha_1=0;
  Linha_2=0;
  Linha_3=0;
  Linha_7=0;
  Linha_8=0;
  Linha_9=0;
   __delay_cycles(50000000);
  Coluna_2=1;
  Linha_1=1;
  Linha_2=1;
  Linha_3=1;
  Linha_7=1;
  Linha_8=1;
  Linha_9=1;
  __delay_cycles(50000000);
  
  
  Coluna_2=0;                     
  Linha_1=0;
  Linha_2=0;
  Linha_3=0;
  Linha_7=0;
  Linha_8=0;
  Linha_9=0;
  __delay_cycles(50000000);
  
   
  Coluna_3=1;                     
  Linha_1=1;
  Linha_2=1;
  Linha_3=1;
  Linha_7=1;
  Linha_8=1;
  Linha_9=1;
  __delay_cycles(50000000);
  
   Coluna_3=0;                     
  Linha_1=0;
  Linha_2=0;
  Linha_3=0;
  Linha_7=0;
  Linha_8=0;
  Linha_9=0;
  
} 
 