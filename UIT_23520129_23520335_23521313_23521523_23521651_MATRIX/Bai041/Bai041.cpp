#include <iostream>
#include <cmath>

using namespace std;

void Nhap(int[][500], int&, int&, int&);
bool KtChinhPhuong(int);
int TongCot(int[][500], int, int, int);

int main()
{
	int b[500][500];
	int m, n, c;
	Nhap(b, m, n, c);
	cout << TongCot(b, m, n, c);
	return 0;
}

void Nhap(int a[][500], int& m, int& n, int& c)
{
	cout << "Nhap vao M: ";
	cin >> m;
	cout << "Nhap vao N: ";
	cin >> n;
	cout << "Nhap vao cot C: ";
	cin >> c;
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

int TongCot(int a[][500], int m, int n, int c)
{
	int s = 0;
	for (int i = 0; i < m; i++)
		if (KtChinhPhuong(a[i][c]))
			s += a[i][c];
	return s;
}