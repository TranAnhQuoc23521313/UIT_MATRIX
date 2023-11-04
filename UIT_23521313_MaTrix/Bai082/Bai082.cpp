#include <iostream>

using namespace std;

void Nhap(int[][500], int&, int&);
int ChanDau(int[][500], int, int);
int ChanLonNhat(int[][500], int, int);

int main()
{
	int b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << ChanLonNhat(b, m, n);
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

int ChanDau(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				return a[i][j];
	return -1;
}

int ChanLonNhat(int a[][500], int m, int n)
{
	int lc = ChanDau(a, m, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (lc < a[i][j] && a[i][j] % 2 == 0)
				lc = a[i][j];
	return lc;
}