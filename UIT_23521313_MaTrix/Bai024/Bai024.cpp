#include <iostream>

using namespace std;

void Nhap(int[][500], int&, int&);
int TongChan(int[][500], int, int);

int main()
{
	int b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout <<	TongChan(b, m, n);
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

int TongChan(int a[][500], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				s += a[i][j];
	return s;
}