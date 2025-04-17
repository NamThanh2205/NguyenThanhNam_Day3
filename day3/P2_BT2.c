/*
 * P2_BT2.c
 *
 *  Created on: Apr 16, 2025
 *      Author: Thanh Nam
 */
#include<stdio.h>
#include<math.h>
void tong_nhan(int a,int b){
	printf("tong: %d + %d = %d\n",a,b,a+b);
	printf("nhan: %d * %d = %d",a,b,a*b);
}
int main(){
	int a = 16;
	int b = 7;
	tong_nhan(a,b);
	getchar();
	getchar();
	return 0;
}


