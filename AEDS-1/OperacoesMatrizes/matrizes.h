/*
 * File:   matrizes.cpp
 * Author: Miguel Leone - 2024.1.08.019
 *
 */

#ifndef MATRIZES_H
#define MATRIZES_H

typedef int Tmat[100][100];

int menu();

void cria(Tmat m1, int L1, int C1,
          Tmat m2, int L2, int C2);

void soma(Tmat m1, int L1, int C1,
          Tmat m2, int L2, int C2,
          Tmat m3, int L3, int C3);

void printMat(Tmat m, int L, int C);

void transp(Tmat m, int L, int C);

void multiplica(Tmat m1, int L1, int C1,
                Tmat m2, int L2, int C2,
                Tmat m3, int L3, int C3);

void media(Tmat m, int L, int C);


#endif /* MATRIZES_H */

