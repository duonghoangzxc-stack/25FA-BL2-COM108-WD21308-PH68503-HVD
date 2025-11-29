// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>

int main()
{
	int n;
	//Cho ng??i dùng nh?p vào s? ph?n t? c?a m?ng
	int mang[n];
	int i;
	for (i = 0; i < n; i++) 
	{
		//M?i ng??i dùng nh?p d? li?u vào trong m?ng
		scanf("%d", &mang[i]);

	}
	float tong = 0;
	float tb;
	int count = 0;
	//Duyet mang
	for (i = 0; i < n; i++) {
		if (mang[i] % 3 == 0) {
			//c?ng mang[i] vào bi?n t?ng
			//t?ng bi?n count lên 1
			tong += mang[i];
			count++;
		}
	}
	tb = tong / count;
}

