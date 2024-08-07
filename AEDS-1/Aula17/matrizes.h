/* 
 * File:   matrizes.h
 * Author: 2024.1.08.019
 *
 */

#ifndef MATRIZES_H
#define MATRIZES_H

typedef int Tmat[100][100];

void soma(Tmat m1, int L1, int C1,
          Tmat m2, int L2, int C2,
          Tmat m3, int L3, int C3);

void cria(Tmat m1, int L1, int C1,
          Tmat m2, int L2, int C2);

void subtrai(Tmat m1, int L1, int C1,
          Tmat m2, int L2, int C2,
          Tmat m3, int L3, int C3);

#endif /* MATRIZES_H */

