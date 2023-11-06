#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void SapDongTang(float[][500], int, int, int);
void SapDongGiam(float[][500], int, int, int);
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
void SapDongTang(float a[][500], int m, int n,int d)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[d][i] > a[d][j])
				HoanVi(a[d][i], a[d][j]);
}
void SapDongGiam(float a[][500], int m, int n, int d)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[d][i] < a[d][j])
				HoanVi(a[d][i], a[d][j]);
}
void SapXep(float a[][500], int m, int n)
{
	for (int i = 0; i <= m - 1; i++)
		if (i % 2 == 0)
			SapDongTang(a, m, n, i);
		else
			SapDongGiam(a, m, n, i);
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
int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	SapXep(b, m, n);
	Xuat(b, m, n);
	return 0;
}