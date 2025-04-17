/*
 * P2_BT3_math.c
 *
 *  Created on: Apr 16, 2025
 *      Author: Thanh Nam
 */
#include "math.h"
#include <stdio.h>
void cong(int a, int b) {
    printf("cong: %d + %d = %d\n", a, b, a + b);
}
void tru(int a, int b) {
    printf("tru: %d - %d = %d\n", a, b, a - b);
}
void nhan(int a, int b) {
    printf("Nhan: %d * %d = %d\n", a, b, a * b);
}
void chia(int a, int b) {
    if (b != 0) {
        printf("Chia: %d / %d = %.2f\n", a, b, (float)a / b);
    } else {
        printf("Loi: Khong the chia cho 0.\n");
    }
}

