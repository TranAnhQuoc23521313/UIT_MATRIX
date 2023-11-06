#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void SapCotTang(float[][500], int, int, int);
void SapCotGiam(float[][500], int, int, int);
void SapXep(float[][500], int, int);
void HoanVi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
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
void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}
void SapCotTang(float a[][500], int m, int n,int c)
{
	for (int i = 0; i <= m - 2; i++)
		for (int j = i + 1; j <= m - 1; j++)
			if (a[i][c] > a[j][c])
				HoanVi(a[i][c], a[j][c]);
}
void SapCotGiam(float a[][500], int m, int n,int c)
{
	for (int i = 0; i <= m - 2; i++)
		for (int j = i + 1; j <= m - 1; j++)
			if (a[i][c] < a[j][c])
		HoanVi(a[i][c], a[j][c]);
}
void SapXep(float a[][500], int m, int n)
{
	for (int j = 0; j <= n - 1; j++)
		if (j % 2 == 0)
			SapCotGiam(a, m, n, j);
		else
			SapCotTang(a, m, n, j);
}
int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	SapXep(b, m, n);
	Xuat(b, m, n);
	return 0;
}
