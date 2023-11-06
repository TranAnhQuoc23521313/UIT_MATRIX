#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void XuatAmGiam(float[][500], int, int);
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
void HoanVi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}
void XuatAmGiam(float a[][500], int m, int n)
{
	float b[500];
	int k; 
	int i, j;
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] < 0)
				b[k++] = a[i][j];
	for (i = 0; i <= k - 2; i++)
		for (j = i + 1; j <= k - 1; j++)
			if (b[i] < b[j])
				HoanVi(b[i], b[j]);
	for (i = 0; i < k; i++)
	{
		cout << fixed << setw(8) << setprecision(5);
		cout << b[i];
	}
}
int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	XuatAmGiam(b, m, n);
	Xuat(b, m, n);
	return 0;
}