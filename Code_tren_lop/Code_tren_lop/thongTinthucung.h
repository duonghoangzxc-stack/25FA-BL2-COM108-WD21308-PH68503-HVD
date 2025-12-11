#pragma once
#include <stdio.h>
#include <string.h>
void thongTinthucung()
{
	int n;
	char maThucung[100][50];
	char ten[100][50];
	int tuoi;
	printf("Nhap so luong thu cung: ");
	scanf("%d", &n);
	getchar();


	for (int i = 0; i < n; i++) 
	{
		printf("\nNhap thu cung %d\n", i + 1);

		printf("Ten thu cung: ");
		fgets(ten[i], 50, stdin);
		ten[i][strcspn(ten[i], "\n")] = 0;

		printf("Tuoi: ");
		scanf("%d", &tuoi);
		getchar();

		printf("Ma thu cung: ");
		fgets(maThucung[i], 50, stdin);
		maThucung[i][strcspn(maThucung[i], "\n")] = 0;

	}
	
	
	for (int i = 0; i < n; i++) {
		printf("\n", ten[i], tuoi, maThucung[i]);
	}
}