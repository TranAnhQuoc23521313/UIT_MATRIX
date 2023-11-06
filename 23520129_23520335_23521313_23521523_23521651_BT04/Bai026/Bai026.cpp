#include <iostream>
#include <cmath>

using namespace std;

void Nhap(int[][500], int&, int&);
int TongChinhPhuong(int[][500], int, int);
bool KtChinhPhuong(int);

int main()
{
	int b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << TongChinhPhuong(b, m, n);
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
	for (int i = 1; i <= sqrt(x); i++)
		if (i * i == x)
			return true;
	return false;
}

int TongChinhPhuong(int a[][500], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (j % 2 != 0 && KtChinhPhuong(a[i][j]))
				s += a[i][j];
	return s;
}