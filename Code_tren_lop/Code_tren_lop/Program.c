// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>

int main()
{
	int i;
	int intergerArray[100];
	int length;
	int tmp;
	printf("Nhap do dai mang: ");
	scanf("%d", &length);
	printf("Nhap du lieu mang %d phan tu:\n ", length);
	for (int i = 0; i < length; i++)
	{
		printf("mang[%d]= ", i);
		scanf("%d", &intergerArray[i]);
	}
	printf("Sap xep mang tang dan %d phan tu:\n ", length);
	for (int i = 0; i < length - 1; i++)
	{
		if (intergerArray[i] > intergerArray[i + 1])
		{
			tmp = intergerArray[i];
			intergerArray[i] = intergerArray[i + 1];
			intergerArray[i + 1] = tmp;
			i = -1;
		}
	}
	printf("Xuat du lieu mang %d phan tu:\n ", length);
	for (int i = 0; i < length; i++)
	{
		printf("mang[%d]= %d\n", i, intergerArray[i]);
	}
	printf("Xuat mang du lieu %d phan tu theo tu tu Giam dan:\n", length);
	for (i = length - 1; i > -1; i--)
	{
		printf("mang[%d]= %d\n", i, intergerArray[i]);
	}
}