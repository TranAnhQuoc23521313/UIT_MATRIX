#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
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
void Xuat(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}
void HoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void ChanGiam(int a[][500], int m, int n)
{
	int b[500];
	int k;
	int i, j;
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				b[k++] = a[i][j];
	for (i = 0; i <= k - 2; i++)
		for (j = i + 1; j <= k - 1; j++)
			if (b[i] < b[j])
				HoanVi(b[i], b[j]);
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				a[i][j] = b[k++];
}
int main()
{
	int b[500][500];
	int m, n;
	Nhap(b, m, n);
	ChanGiam(b, m, n);
	Xuat(b, m, n);
	return 0;
}