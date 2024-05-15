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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef _Cube_H
#define _Cube_H //previne dupla inclusão da biblioteca

/* Includes ------------------------------------------------------------------*/

#include "io430.h"
#include <stdlib.h>

/* Private defines -----------------------------------------------------------*/

#define M0_M1       P1IN&0x03                      // lEITURA DOS DSW1   
#define Entrada     P1IN&0XF8                      // LEITURA DOS DSW2
   //define linhas e colunas em cada bit respectivo
#define Linha_1     P2OUT_bit.P0
#define Linha_2     P2OUT_bit.P1
#define Linha_3     P2OUT_bit.P2
#define Linha_4     P2OUT_bit.P3
#define Linha_5     P2OUT_bit.P4
#define Linha_6     P2OUT_bit.P5
#define Linha_7     P2OUT_bit.P6     
#define Linha_8     P2OUT_bit.P7
#define Linha_9     P3OUT_bit.P0
   
#define Coluna_1    P4OUT_bit.P0
#define Coluna_2    P4OUT_bit.P1
#define Coluna_3    P4OUT_bit.P2

/* Prototypes ----------------------------------------------------------------*/
  //chamada dos modos
void Configura (void);
void Sel_Mod();
void Mod_0 (void);
void Mod_1 (void);
void Mod_2 (void);
void Mod_3 (void);

#endif