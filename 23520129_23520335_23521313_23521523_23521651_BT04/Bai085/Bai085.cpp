#include <iostream>
#include <cmath>

using namespace std;

void Nhap(int[][500], int&, int&);
bool KtChinhPhuong(int);
int ChinhPhuongDau(int[][500], int, int);
int ChinhPhuongLonNhat(int[][500], int, int);

int main()
{
	int b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << ChinhPhuongLonNhat(b, m, n);
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
	if (x < 0)
		return false;
	for (int i = 0; i <= sqrt(x); i++)
		if (i * i == x)
			return true;
	return false;
}

int ChinhPhuongDau(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtChinhPhuong(a[i][j]))
				return a[i][j];
	return -1;
}

int ChinhPhuongLonNhat(int a[][500], int m, int n)
{
	int lc = ChinhPhuongDau(a, m, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtChinhPhuong(a[i][j]) && lc < a[i][j])
				lc = a[i][j];
	return lc;
}