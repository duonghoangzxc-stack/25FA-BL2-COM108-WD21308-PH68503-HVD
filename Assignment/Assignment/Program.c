// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>
#include <string.h>

int gcd(int a, int b)
{
	while (b != 0)
	{
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

void Kiem_tra_so_nguyen()
{
	int tieptuc_1;
	do
	{
		double so;
		system("cls");
		printf("Moi nhap so: ");
		scanf("%lf", &so);
		if (so != (int)so)
		{
			printf("%lf ko phai la so nguyen!\n", so);
		}
		else
		{
			printf("%lf la so nguyen\n", so);
		}
		if (so < 0)
		{
			printf("%lf khong phai la so chinh phuong (vi la so am)\n", so);
		}
		else
		{
			int can = sqrt(so);

			if (can * can == so) {
				printf("%lf la so chinh phuong\n", so);
			}
			else {
				printf("%lf khong phai so chinh phuong\n", so);
			}
		}
		if (so < 2 || so != (int)so)
		{
			printf("%lf khong phai la so nguyen to\n", so);
		}
		else
		{
			int i, check = 1;


			for (i = 2; i <= sqrt(so); i++)
			{
				if ((int)so % i == 0)
				{
					check = 0;
					break;
				}
			}
			printf("%lf la so nguyen to\n", so);
		}
		printf("Ban co muon tiep tuc khong?  [1 - Co | Khong - Khac]");
		printf("\n");
		scanf("%d", &tieptuc_1);

	} while (tieptuc_1 == 1);
	system("cls");


}
void Tim_uoc_chung_va_boi_chung_cua_2_so()
{
	int tieptuc_2;
	do
	{
		system("cls");
		double x, y;
		do
		{
			do
			{
				printf("Nhap hai so: ");
				scanf("%lf %lf", &x, &y);
				if (x == y)
				{
					printf("Hai so phai khac nhau, vui long nhap lai!\n");
				}
			} while (x == y);

			if (x == (int)x && y == (int)y)
			{
				int ucln = gcd(x, y);
				int bcnn = (x * y) / ucln;

				printf("UCLN = %d\n", ucln);
				printf("BCNN = %d\n", bcnn);
			}
			else
			{
				printf("Vui long nhap so nguyen!\n");
			}
		} while (x != (int)x && y != (int)y);


		printf("Ban co muon tiep tuc khong? [1 - Co | Khong - Khac]");
		printf("\n");
		scanf("%d", &tieptuc_2);
		system("cls");
	} while (tieptuc_2 == 1);


}
void Tinh_tien_cho_quan_Karaoke()
{
	int tieptuc_3;
	do
	{
		system("cls");
		int hBD, mBD, hKT, mKT;
		const int GIA_GIO_DAU = 150000;
		const float GIAM_30 = 0.7;
		const float GIAM_10 = 0.9;


		do {
			printf("Nhap gio bat dau (hh mm): ");
			scanf("%d %d", &hBD, &mBD);

			if (hBD < 12 || hBD > 23 || mBD < 0 || mBD >= 60) {
				printf("Gio bat dau khong hop le! Quay lai nhap.\n");
				continue;
			}


			if (hBD == 23 && mBD > 0) {
				printf("Quy dinh: Gio bat dau toi da la 23:00!\n");
				continue;
			}

			break;

		} while (1);


		do {
			printf("Nhap gio ket thuc (hh mm): ");
			scanf("%d %d", &hKT, &mKT);


			if (hKT < 12 || hKT > 23 || mKT < 0 || mKT >= 60) {
				printf("Gio ket thuc khong hop le! Quay lai nhap.\n");
				continue;
			}


			if (hKT == 23 && mKT > 0) {
				printf("Quy dinh: Gio ket thuc toi da la 23:00!\n");
				continue;
			}


			if (hKT < hBD || (hKT == hBD && mKT <= mBD)) {
				printf("Gio ket thuc phai lon hon gio bat dau!\n");
				continue;
			}

			break;

		} while (1);


		float start = hBD + mBD / 60.0;
		float end = hKT + mKT / 60.0;
		float soGio = end - start;


		float tongTien = 0;

		if (soGio <= 3) {
			tongTien = soGio * GIA_GIO_DAU;
		}
		else {
			tongTien = 3 * GIA_GIO_DAU;
			tongTien += (soGio - 3) * (GIA_GIO_DAU * GIAM_30);
		}


		if (start >= 14 && start < 18) {
			tongTien *= GIAM_10;
		}


		printf("\n===== HOA DON KARAOKE =====\n");
		printf("Gio bat dau : %02d:%02d\n", hBD, mBD);
		printf("Gio ket thuc: %02d:%02d\n", hKT, mKT);
		printf("So gio hat : %.2f gio\n", soGio);
		printf("Tong tien  : %.0f VND\n", tongTien);

		printf("Ban co muon tiep tuc khong? [1 - Co | Khong - Khac]");
		printf("\n");
		scanf("%d", &tieptuc_3);
	} while (tieptuc_3 == 1);
	system("cls");

}
void Tinh_tien_dien()
{
	int tieptuc_4;
	do
	{
		system("cls");
		int kwh, i;
		float tien = 0;
		int muc_kwh[] = { 50, 50, 100, 100, 100, 999999 };
		float gia[] = { 1678, 1734, 2014, 2536, 2834, 2927 };

		printf("======================================\n");
		printf("			TINH TIEN DIEN \n");
		printf("======================================\n");
		printf("Nhap so kWh dien su dung: ");
		scanf("%d", &kwh);

		if (kwh < 0) {
			printf("So kWh khong hop le!\n");
			return;
		}


		int bac[] = { 50, 50, 100, 100, 100, 999999 };
		double giatien[] = { 1.678, 1.734, 2.014, 2.536, 2.834, 2.927 };

		int daDung = 0;
		double tongTien = 0;


		printf("\n================= BANG CHI TIET TIEN DIEN =================\n");
		printf("%-6s | %-18s | %-18s | %-15s\n",// %s la chuoi ky tu, dau - chi dinh chuoi ky tu se can trai (neu khong se tu dong can le phai), "6" la do dai 
			"Bac", "Don gia (dong/kWh)", "San luong (kWh)", "Thanh tien"); // cac "...." se tuong ung voi cac cot |.....| 
		printf("------------------------------------------------------------\n");


		for (int i = 0; i < 6; i++) {
			if (kwh <= daDung) break;

			int gioiHan = bac[i];
			int dungBac = (kwh - daDung >= gioiHan) ? gioiHan : (kwh - daDung);

			double tienBac = dungBac * gia[i];
			tongTien += tienBac;
			daDung += dungBac;

			printf("%-6d | %-18.3f | %-18d | %-15.0f\n",
				i + 1,
				gia[i],
				dungBac,
				tienBac);
		}

		printf("so tien phai tra: %.0f dong\n", tongTien);

		printf("Ban co muon tiep tuc khong? [1 - Co | Khong - Khac]");
		printf("\n");
		scanf("%d", &tieptuc_4);
	} while (tieptuc_4 == 1);
	system("cls");
}
void Doi_tien()
{
	int tieptuc_5;
	do
	{
		system("cls");
		int menhGia[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
		int soLuongMG = sizeof(menhGia) / sizeof(menhGia[0]);

		int soTien;
		printf("Nhap so tien can doi: ");
		scanf("%d", &soTien);

		printf("\nKet qua doi tien:\n");

		for (int i = 0; i < soLuongMG; i++)
		{
			int soTo = soTien / menhGia[i];

			if (soTo > 0)
			{
				printf("- %d to %d\n", soTo, menhGia[i]);
				soTien %= menhGia[i];
			}
		}
		printf("Ban co muon tiep tuc khong?  [1 - Co | Khong - Khac]");
		printf("\n");
		scanf("%d", &tieptuc_5);
		system("cls");
	} while (tieptuc_5 == 1);

}
void Tinh_lai_suat_vay_ngan_hang_vay_tra_gop()
{
	int tieptuc_6;
	do
	{
		system("cls");
		long long tienVay;
		const double laiSuat = 0.05;
		const int soThang = 12;

		printf("Nhap so tien muon vay: ");
		scanf("%lld", &tienVay);

		long long gocMoiThang = tienVay / soThang;
		long long soTienConLai = tienVay;

		printf("\n-----------------------------------------------\n");
		printf("Ky han |   Lai phai tra   |  Goc phai tra  | Tong phai tra | So tien con lai\n");
		printf("-----------------------------------------------\n");

		for (int thang = 1; thang <= soThang; thang++) {
			long long laiThang = soTienConLai * laiSuat;
			long long tongThang = laiThang + gocMoiThang;
			soTienConLai -= gocMoiThang;

			printf("%4d   | %10lld      | %10lld    | %10lld    | %10lld\n",
				thang, laiThang, gocMoiThang, tongThang, soTienConLai);
		}

		printf("Ban co muon tiep tuc khong?  [1 - Co | Khong - Khac]");
		printf("\n");
		scanf("%d", &tieptuc_6);

	} while (tieptuc_6 == 1);
	system("cls");
}
void Vay_tien_mua_xe()
{
	int tieptuc_7;
	do
	{
		system("cls");
		double phantram;
		do
		{
			printf("Nhap %% vay toi da (VD: 80%% -> tra truoc 20%% gia tri, tra gop 80%% gia tri): ");
			scanf("%lf", &phantram);
			if (phantram >= 100 || phantram <= 0)
			{
				printf("khoan vay khong hop le, vui long nhap lai (khoan vay khong dc >= 100%% hoac <= 0)\n");
			}
		} while (phantram >= 100 || phantram <= 0);


		double xe = 500000000;
		double vay = xe * phantram / 100;
		double traTruoc = xe - vay;
		int thang = 24 * 12;
		double laiThang = 0.072 / 12;
		double gocThang = vay / thang;
		printf("Tra truoc: %.0f VND\n", traTruoc);
		printf("Tra 12 thang dau:\n");

		for (int i = 1; i <= 12; i++) {
			double tienLai = vay * laiThang;
			double phaiTra = gocThang + tienLai;
			vay -= gocThang;
			printf("Thang %d: %.0f VND\n", i, phaiTra);
		}

		printf("Ban co muon tiep tuc khong?  [1 - Co | Khong - Khac]");
		printf("\n");
		scanf("%d", &tieptuc_7);

	} while (tieptuc_7 == 1);
	system("cls");
}
void Sap_xep_thong_tin_sinh_vien()
{
	int tieptuc_8;
	do
	{

		system("cls");
		int n;
		char name[100][50];
		double score[100];
		char rank[100][20];

		printf("Nhap so luong sinh vien: ");
		scanf("%d", &n);
		getchar();


		for (int i = 0; i < n; i++) {
			printf("\nNhap sinh vien %d\n", i + 1);

			printf("Ho ten: ");
			fgets(name[i], 50, stdin);
			name[i][strcspn(name[i], "\n")] = 0;

			printf("Diem: ");
			scanf("%lf", &score[i]);
			getchar();

			// Phân lo?i h?c l?c
			if (score[i] >= 9)
				strcpy(rank[i], "Xuat sac");
			else if (score[i] >= 8)
				strcpy(rank[i], "Gioi");
			else if (score[i] >= 6.5)
				strcpy(rank[i], "Kha");
			else if (score[i] >= 5)
				strcpy(rank[i], "Trung binh");
			else
				strcpy(rank[i], "Yeu");
		}




		printf("======================================\n");
		printf("		 DANH SACH SINH VIEN\n");
		printf("======================================\n");
		printf("%-25s %-10s %-15s\n", "Ho ten", "Diem", "Hoc luc");

		for (int i = 0; i < n; i++) {
			printf("%-25s %-10.2f %-15s\n", name[i], score[i], rank[i]);
		}
		printf("Ban co muon tiep tuc khong?  [1 - Co | Khong - Khac]");
		printf("\n");
		scanf("%d", &tieptuc_8);

	} while (tieptuc_8 == 1);
	system("cls");
}
void Xay_dung_game_FPOLY_LOTT()
{
	int tieptuc_9;
	do
	{
		system("cls");
		int user_num1, user_num2;
		int sys_num1, sys_num2;
		int matched_count = 0;


		srand(time(NULL));

		printf("======================================\n");
		printf("        GAME FPOLY-LOTT (1 den 15)\n");
		printf("======================================\n");

		printf("Luu y, hay nhap so nguyen!!");
		printf("Nhap so thu nhat (01 - 15): \n");

		scanf("%d", &user_num1);


		do {
			printf("Nhap so thu hai (01 - 15, khac so tren): ");
			scanf("%d", &user_num2);

			if (user_num2 == user_num1) {
				printf("=> Loi: Hai so phai khac nhau. Vui long nhap lai.\n");
			}

			else if (user_num2 < 1 || user_num2 > 15 || user_num1 < 1 || user_num1 > 15) {
				printf("=> Loi: So phai nam trong pham vi 01 den 15. Vui long nhap lai.\n");
			}
		} while (user_num2 == user_num1 || user_num2 < 1 || user_num2 > 15 || user_num1 < 1 || user_num1 > 15);

		sys_num1 = (rand() % 15) + 1;


		do {
			sys_num2 = (rand() % 15) + 1;
		} while (sys_num2 == sys_num1);

		printf("\n>>> KET QUA RUT THAM <<< \n");
		printf("He thong rut: **%02d** va **%02d**\n", sys_num1, sys_num2);
		printf("So cua ban:   **%02d** va **%02d**\n", user_num1, user_num2);
		printf("--------------------------------------\n");


		if (user_num1 == sys_num1 || user_num1 == sys_num2) {
			matched_count++;
		}


		if (user_num2 == sys_num1 || user_num2 == sys_num2) {
			matched_count++;
		}


		printf("Ban da trung khop **%d** so.\n", matched_count);

		if (matched_count == 2) {
			printf("=> **CHUC MUNG BAN DA TRUNG GIAI NHAT!**\n");
		}
		else if (matched_count == 1) {
			printf("=> **Chuc mung ban da trung giai nhi**\n");
		}
		else {
			printf("=> **Chuc ban may man lan sau**\n");
		}

		printf("======================================\n");
		printf("Ban co muon tiep tuc khong?  [1 - Co | Khong - Khac]");
		printf("\n");
		scanf("%d", &tieptuc_9);

	} while (tieptuc_9 == 1);
	system("cls");
}
void Tinh_toan_phan_so()
{
	int tieptuc_10;
	do
	{
		system("cls");
		int tuA, mauA, tuB, mauB;

		printf("======================================\n");
		printf("     TINH TOAN CO BAN VOI 2 PHAN SO\n");
		printf("======================================\n");


		do {
			printf("Nhap Tu so A: "); scanf("%d", &tuA);
			printf("Nhap Mau so A: "); scanf("%d", &mauA);
			if (mauA == 0) printf("=> Loi: Mau so phai khac 0. Nhap lai A.\n");
		} while (mauA == 0);

		do {
			printf("Nhap Tu so B: "); scanf("%d", &tuB);
			printf("Nhap Mau so B: "); scanf("%d", &mauB);
			if (mauB == 0) printf("=> Loi: Mau so phai khac 0. Nhap lai B.\n");
		} while (mauB == 0);

		printf("\nPhan so A la: %d/%d\n", tuA, mauA);
		printf("Phan so B la: %d/%d\n", tuB, mauB);


		printf("\n---------------- KET QUA ----------------\n");


		printf("1. TONG (A + B) = %d/%d\n",
			tuA * mauB + tuB * mauA,
			mauA * mauB);


		printf("2. HIEU (A - B) = %d/%d\n",
			tuA * mauB - tuB * mauA,
			mauA * mauB);


		printf("3. TICH (A * B) = %d/%d\n",
			tuA * tuB,
			mauA * mauB);

		if (tuB != 0) {
			printf("4. THUONG (A / B) = %d/%d\n",
				tuA * mauB,
				mauA * tuB);
		}
		else {
			printf("4. THUONG (A / B) = Khong the chia cho 0\n");
		}

		printf("-----------------------------------------\n");
		printf("Ban co muon tiep tuc khong?  [1 - Co | Khong - Khac]");
		printf("\n");
		scanf("%d", &tieptuc_10);


	} while (tieptuc_10 == 1);
	system("cls");
}

int main()
{
	int chon;

	do
	{

		printf("Menu"); printf("\n");
		printf("1. Kiem tra so nguyen"); printf("\n");
		printf("2. Tim uoc chung va boi chung cua 2 so"); printf("\n");
		printf("3. Tinh tien cho quan Karaoke"); printf("\n");
		printf("4. Tinh tien dien"); printf("\n");
		printf("5. Doi tien"); printf("\n");
		printf("6. Tinh lai suat vay ngan hang, vay tra gop"); printf("\n");
		printf("7. Vay tien mua xe "); printf("\n");
		printf("8. Sap xep thong tin sinh vien"); printf("\n");
		printf("9. Xay dung game FPOLY-LOTT"); printf("\n");
		printf("10. Tinh toan phan so "); printf("\n");
		printf("0. Thoat"); printf("\n");
		printf("Chon chuc nang tren Menu"); printf("\n");

		scanf("%d", &chon);
		system("cls");

		switch (chon)
		{
		case 1:
			Kiem_tra_so_nguyen();
			break;
		case 2:
			Tim_uoc_chung_va_boi_chung_cua_2_so();
			break;
		case 3:
			Tinh_tien_cho_quan_Karaoke();
			break;
		case 4:
			Tinh_tien_dien();
			break;
		case 5:
			Doi_tien();
			break;
		case 6:
			Tinh_lai_suat_vay_ngan_hang_vay_tra_gop();
			break;
		case 7:
			Vay_tien_mua_xe();
			break;
		case 8:
			Sap_xep_thong_tin_sinh_vien();
			break;
		case 9:
			Xay_dung_game_FPOLY_LOTT();
			break;
		case 10:
			Tinh_toan_phan_so();
			break;
		case 0:
			printf("Thoat");
			printf("\n");
			break;
		default:
			printf("Hay chon cac chuc nang tren Menu [1-10]");
			printf("\n");
			break;
		}
	}

	while (chon != 0);
}