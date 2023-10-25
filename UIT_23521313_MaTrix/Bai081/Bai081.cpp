#include <iostream>

using namespace std;

void Nhap(float[][500], int&, int&);
float AmDau(float[][500], int, int);
float AmLonNhat(float[][500], int, int);

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << AmLonNhat(b, m, n);
	return 0;
}

void Nhap(float a[][500], int& m, int& n)
{
	cout << "Nhap vao M: ";
	cin >> m;
	cout << "Nhap vao N: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap vao gia tri A[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

float AmDau(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] < 0) // Neu la so chan thi cho nay thay doi dieu kien
				return a[i][j];
	/* Neu tim duoc so am thi se tra ve no ngay lap tuc*/
	return 0; 
/* Tra ve 0 thi se khong lam gi nua la boi vi trong ma tran khong ton tai so am nao ca*/
}

float AmLonNhat(float a[][500], int m, int n)
{
	float lc = AmDau(a, m, n);
	if (lc == 0)
		return 0;
/*Cho nay la y nghia cua cai return 0 o cai ham AmDau neu ma co ton tai thi moi so sanh den so am lon nhat*/
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] < 0 && a[i][j] > lc) // Meu de hoi so chan lon nhat thi doi dieu kien cho nay
				lc = a[i][j];
	return lc;
}