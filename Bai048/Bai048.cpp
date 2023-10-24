#include <iostream>
#include <iomanip>
#include <iomanip>

using namespace std;

void Nhap(int[][500], int&, int&);
bool KtChinhPhuong(int);
int TongBien(int[][500], int, int);

int main()
{
	int b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << TongBien(b, m, n);
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
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

bool KtChinhPhuong(int x)
{
	if (x < 1)
		return false;
	for (int i = 1; i <= sqrt(x); i++)
		if (i * i == x)
			return true;
	return false;
}

int TongBien(int a[][500], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
				if (KtChinhPhuong(a[i][j]))
					s += a[i][j];
	return s;
}