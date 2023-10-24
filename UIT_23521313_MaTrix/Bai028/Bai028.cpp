#include <iostream>

using namespace std;

void Nhap(int[][500], int&, int&);
bool KtToanChan(int);
int TongToanChan(int[][500], int, int);

int main()
{
	int b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << TongToanChan(b, m, n);
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

bool KtToanChan(int x)
{
	int temp = x;
	while (temp != 0)
	{
		if ((temp % 10) % 2 != 0)
			return false;
		temp /= 10;
	}
	return true;
}

int TongToanChan(int a[][500], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtToanChan(a[i][j]))
				s += a[i][j];
	return s;
}