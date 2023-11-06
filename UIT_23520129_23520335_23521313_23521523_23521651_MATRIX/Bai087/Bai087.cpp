#include <iostream>

using namespace std;

void Nhap(float[][500], int&, int&);
int TanSuat(float[][500], int, int,float);
float TimGiaTri(float[][500], int, int);

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << TimGiaTri(b, m, n);
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

int TanSuat(float a[][500], int m, int n,float x)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] == x)
				dem++;
	return dem;
}

float TimGiaTri(float a[][500], int m, int n)
{
	float lc = a[0][0]; 
/* Cho nay lc khong gan bang ham TanSuat la boi
de yeu cau la xuat ra gia tri chu khong phai la so luong lan lap lai*/
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (TanSuat(a, m, n, a[i][j]) > TanSuat(a, m, n, lc))
				lc = a[i][j];
	return lc;
}