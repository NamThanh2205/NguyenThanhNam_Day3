/*
 * P3_BT4.c
 *
 *  Created on: Apr 17, 2025
 *      Author: Thanh Nam
 */
#include <stdio.h>
struct NguoiDung {
    char hoTen[50];
    int tuoi;
    char gioiTinh[10];
    char thanhPho[30];
    int maBuuDien;
    char honNhan[20];
    float mucLuong;
};
int main() {
    struct NguoiDung user;
    printf("=== FORM DANG KY NGUOI DUNG ===\n");

    printf("Ho ten: ");
    fgets(user.hoTen, sizeof(user.hoTen), stdin);

    printf("Tuoi: ");
    scanf("%d", &user.tuoi);
    getchar();
    printf("Gioi tinh: ");
    fgets(user.gioiTinh, sizeof(user.gioiTinh), stdin);
    printf("Thanh pho: ");
    fgets(user.thanhPho, sizeof(user.thanhPho), stdin);
    printf("Ma buu dien: ");
    scanf("%d", &user.maBuuDien);
    getchar();
    printf("Tinh trang hon nhan: ");
    fgets(user.honNhan, sizeof(user.honNhan), stdin);
    printf("Muc luong (VND): ");
    scanf("%f", &user.mucLuong);
    printf("\n=== THONG TIN DA DANG KY ===\n");
    printf("Ho ten           : %s", user.hoTen);
    printf("Tuoi             : %d\n", user.tuoi);
    printf("Gioi tinh        : %s", user.gioiTinh);
    printf("Thanh pho        : %s", user.thanhPho);
    printf("Ma buu dien      : %d\n", user.maBuuDien);
    printf("Tinh trang hon nhan: %s", user.honNhan);
    printf("Muc luong        : %.2f VND\n", user.mucLuong);
    getchar();
    getchar();
    return 0;
}
