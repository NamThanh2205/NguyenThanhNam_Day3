/*
 * P1_BT1.c
 *
 *  Created on: Apr 16, 2025
 *      Author: Thanh Nam
 */
#include <stdio.h>

int main(void){
	char data = 100;
	printf("gia tri cua bien: %d\n",data);
	printf("gia tri dia chi: %p\n",(void*)&data);
	char *bien=&data;
	char docGiaTri = *bien;
	printf("doc gia tri con cho: %d\n",docGiaTri);
	*bien = 65;
	printf("gia tri moi cua bien: %d\n",data);
	getchar();
	getchar();
	return 0;
}


