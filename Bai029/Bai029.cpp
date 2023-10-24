#include <iostream>

using namespace std;

void Nhap(int[][500], int&, int&);
bool KtDang3m(int);
int Tong3m(int[][500], int, int);

int main()
{
	int b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << Tong3m(b, m, n);
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

bool KtDang3m(int x)
{
	int temp = x;
	if (x <= 0)
		return false;
	while (temp > 1)
	{
		if (temp % 3 != 0)
			return false;
		temp /= 3;
	}
	return true;
}

int Tong3m(int a[][500], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtDang3m(a[i][j]))
				s += a[i][j];
	return s;
}