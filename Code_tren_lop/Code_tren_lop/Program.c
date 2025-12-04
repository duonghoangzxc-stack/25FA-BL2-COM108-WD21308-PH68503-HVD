

#include <stdio.h>
#include <string.h>

void kiemTraSoNguyen()
{
	printf("Kiem Tra So Nguyen");
}

void uocChungBoiChung()
{
	printf("Uoc Chung Boi Chung");
}

void demo_mang2chieu()
{
	char kyTu = 'A'; // chi khai bao dc 1 ky tu
	char mangKytu[10] =  "Anh" ;// mang khai bao dc nhieu ky tu va dung ""
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%c", &mangKytu[i]);
	}
	puts(mangKytu);
	
	





	int array[2][3];
	for (int i = 0; i < 2; i++) // thangf nao chay truoc se dai dien cho dongf
	{
		for (int j = 0; j < 3; j++)// vong lap nay chay sau se dai dien cho cot
		{
			printf("mang[%d] [%d] = ", i, j);
			scanf("%d", &array[i][j]);


		}
	}
	
	for (int i = 0; i < 2; i++) // thangf nao chay truoc se dai dien cho dongf
	{
		for (int j = 0; j < 3; j++)// vong lap nay chay sau se dai dien cho cot
		{
			printf("%d,  ", array[i][j]);
		}
		printf("\n");
		for (int i = 0; i < 3; i++)
		{

		}
	}
}
void demo_string()
{
	char mangKytu[10];
	while (getchar() != '\n'); // clear buffer
	printf("Nhap chuoi ky tu: ");
	fgets(mangKytu, sizeof(mangKytu), stdin);
	printf("%s", mangKytu);
	printf("\n");

	/*printf("string length: ");
	printf("%d\n", strlen(mangKytu) -1 );
	printf("string compare: ");
	printf("%d", strcmp ("D", "A"));
	printf("\n");
	printf("string compare: ");
	printf("%d", strcmp ("A", "D"));
	printf("\n");*/
	printf("string reverse: ");
	printf("%s", strrev (mangKytu));
	printf("\n");
	printf("string upper: ");
	printf("%s", strupr (mangKytu));
	printf("\n");

}
void lapChucNang(int chonChucNang)
{
	
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			demo_string();
			break;
		case 3:
			demo_mang2chieu();
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
		printf("1. Kiem Tra So Nguyen");
		printf("\n");
		printf("2. Demo string");
		printf("\n");
		printf("3. Demo mang 2 chieu ");
		printf("\n");
		printf("Hay chon CN [0-3]: ");
		scanf("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
}