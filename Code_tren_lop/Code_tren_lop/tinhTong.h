#pragma once
#include <stdio.h>
#include <string.h>
void tinhTong()
{
	int n;
	do
	{
		printf("Moi nhap so: ");
		scanf("%d", &n);
		if (n < 3)
			printf("So ban nhap khong hop le. Vui long nhap lai!\n");
	} while (n < 3);
	
	int tong = 0;
	for (int i = 1; i <= n; i+=2)
	{
		tong += i;
	}
	printf("Tong cac so le tu 1 den %d la: %d\n", n, tong);
	if (n % 5 == 0)
	{
		printf(" So %d chia het cho 5", n);
	}
	else {
		printf(" So %d khong chia het cho 5", n);
	}
}


