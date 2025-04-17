/*
 * P3_BT1.c
 *
 *  Created on: Apr 17, 2025
 *      Author: Thanh Nam
 */
#include<stdio.h>

struct addition{
	int num1;
	int num2;
	int sum;
};
int main(){
	struct addition add;
	printf("nhap so thu nhat: ");
	scanf("%d",&add.num1);
	printf("nhap so thu hai: ");
	scanf("%d",&add.num2);
	add.sum = add.num1 + add.num2;
	printf("tong cua %d va %d la: %d",add.num1,add.num2,add.sum);
	getchar();
	getchar();
	return 0;
}

