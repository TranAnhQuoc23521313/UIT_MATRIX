#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void HoanViDong(float[][500], int, int, int,int);
float TongDong(float[][500], int, int, int);
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
void HoanViDong(float a[][500], int m, int n,int d1, int d2)
{
	for (int j = 0; j < n; j++)
		HoanVi(a[d1][j], a[d2][j]);
}
float TongDong(float a[][500], int m, int n,
	int d)
{
	float s = 0;
	for (int j = 0; j < n; j++)
		s = s + a[d][j];
	return s;
}
void SapTang(float a[][500], int m, int n)
{
	for (int i = 0; i <= m - 2; i++)
		for (int j = i + 1; j <= m - 1; j++)
			if (TongDong(a, m, n, i) > TongDong(a, m, n, j))
				HoanViDong(a, m, n, i, j);
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
	SapTang(b, m, n);
	Xuat(b, m, n);
	return 0;
}