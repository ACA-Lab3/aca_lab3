//
// Created by krv on 3/10/17.
//
#include <util.h>
#include "matmat_auto.h"

void matmat_auto(int n, int c, float **mat_c, const float **mat_a, const float **mat_b) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < c; j++) {
            mat_c[i][j] += mat_a[i][0] * mat_b[0][j];
            for (int k = 1; k < n; k++) {
                mat_c[i][j] += mat_a[i][k] * mat_b[k][j];
            }
        }
    }
}