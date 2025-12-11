

#include <stdio.h>
#include <string.h>

#include "thongTinthucung.h"

#include "tinhTong.h"

void thongTincuahang()
{
	printf("Cua hang ABC");
}

void lapChucNang(int chonChucNang)
{
	
	
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			thongTinthucung();
			break;
		case 2:
			tinhTong();
			break;
		case 3:
			thongTincuahang();
			break;
		case 0:
			return;
		default:
			printf("Hay chon lai [0-3]");
			break;
		}

		printf("\n");
		printf("Tiep tuc CN nay? [1=Co | 0=Khong]: ");
		scanf("%d", &tiepTuc);
		system("cls");
	}
}

int main()
{
	int chonChucNang;
	do
	{
		printf("Menu");
		printf("\n");
		printf("1. Thong tin thu cung");
		printf("\n");
		printf("2. Tinh tong");
		printf("\n");
		printf("3. Thong tin cua hang ");
		printf("\n");
		printf("Hay chon CN [0-3]: ");
		scanf("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
}