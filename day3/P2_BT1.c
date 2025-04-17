/*
 * P2_BT1.c
 *
 *  Created on: Apr 16, 2025
 *      Author: Thanh Nam
 */
#include <stdio.h>

// Hàm hoán đổi bằng cách truyền theo giá trị
void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Trong ham swap_by_value: a = %d, b = %d\n", a, b);
}

// Hàm hoán đổi bằng cách truyền theo tham chiếu (dùng con trỏ)
void swap_by_reference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Trong ham swap_by_reference: a = %d, b = %d\n", *a, *b);
}

int main() {
    int x = 10;
    int y = 20;

    printf("=== TRUYEN THEO GIA TRI ===\n");
    printf("Truoc khi goi swap_by_value: x = %d, y = %d\n", x, y);
    swap_by_value(x, y);
    printf("Sau khi goi swap_by_value:  x = %d, y = %d\n", x, y);

    printf("\n=== TRUYEN THEO THAM CHIEU ===\n");
    printf("Truoc khi goi swap_by_reference: x = %d, y = %d\n", x, y);
    swap_by_reference(&x, &y);
    printf("Sau khi goi swap_by_reference:  x = %d, y = %d\n", x, y);

    getchar();
    return 0;
}


