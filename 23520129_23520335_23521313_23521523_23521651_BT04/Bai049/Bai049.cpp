#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[][500], int&, int&);
bool KtDang5m(int);
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

bool KtDang5m(int x)
{
	if (x < 1)
		return false;
	int temp = x;
	while (temp > 1)
	{
		if (temp % 5 != 0)
			return false;
		temp /= 5;
	}
	return true;
}

int TongBien(int a[][500], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
				if (KtDang5m(a[i][j]))
					s += a[i][j];
	return s;
}