/*
 * P3_BT2.c
 *
 *  Created on: Apr 17, 2025
 *      Author: Thanh Nam
 */
#include <stdio.h>
struct HinhChuNhat {
    int cd,cr,dt;
};
int main(){
	int n;
	printf("So luong hinh chu nhat: ");scanf("%d",&n);
	struct HinhChuNhat hcn[n];
	for (int i=0;i<n;i++)
	{
	 printf("HCN[%d]\n",i+1);
	 printf("Chieu dai: ");scanf("%d",&hcn[i].cd);
	 printf("Chieu rong: ");scanf("%d",&hcn[i].cr);
	 hcn[i].dt = hcn[i].cd * hcn[i].cr;
	}
	    for (int i = 0; i < n; i++) {
	        printf("Hinh HCN[%d] - Dai: %d, Rong: %d, Dien tich: %d\n",i + 1, hcn[i].cd, hcn[i].cr, hcn[i].dt);

	    }
	getchar();
	getchar();
	return 0;
}


