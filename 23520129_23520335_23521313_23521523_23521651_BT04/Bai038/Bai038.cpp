#include <iostream>

using namespace std;

void Nhap(int[][500], int&, int&, int&);
bool KtDang5m(int);
int TongDong(int[][500], int, int, int);

int main()
{
	int b[500][500];
	int m, n, d;
	Nhap(b, m, n, d);
	cout << TongDong(b, m, n, d);
	return 0;
}

void Nhap(int a[][500], int& m, int& n, int& d)
{
	cout << "Nhap vao M: ";
	cin >> m;
	cout << "Nhap vao N: ";
	cin >> n;
	cout << "Nhap vao dong D: ";
	cin >> d;
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
	int temp = x;
	if (x < 1)
		return false;
	while (temp > 1)
	{
		if (temp % 5 != 0)
			return false;
		temp /= 5;
	}
	return true;
}

int TongDong(int a[][500], int m, int n, int d)
{
	int s = 0;
	for (int j = 0; j < n; j++)
		if (KtDang5m(a[d][j]))
			s += a[d][j];
	return s;
}