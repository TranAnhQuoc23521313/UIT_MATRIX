#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&, int&);
void HoanVi(float&, float&);
void SapDongGiam(float[][500], int, int, int);
void Xuat(float[][500], int, int);

int main()
{
	float b[500][500];
	int m, n, d;
	Nhap(b, m, n, d);
	SapDongGiam(b, m, n, d);
	Xuat(b, m, n);
	return 0;
}

void Nhap(float a[][500], int& m, int& n, int& d)
{
	cout << "Nhap vao dong D: ";
	cin >> d;
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

void HoanVi(float& x, float& y)
{
	float temp = x;
	x = y;
	y = temp;
}

void SapDongGiam(float a[][500], int m, int n, int d)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[d][i] < a[d][j])
				HoanVi(a[d][i], a[d][j]);
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