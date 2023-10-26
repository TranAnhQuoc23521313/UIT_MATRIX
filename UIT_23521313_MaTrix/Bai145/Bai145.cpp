#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void Nhap(int[][500], int&, int&);
int KtDong(int[][500], int, int, int);
void XoaDong(int[][500], int&, int, int);
void XoaDong(int[][500], int&, int);
void Xuat(int[][500], int, int);

int main()
{
	int b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << "Ma tran truoc khi xoa: \n";
	Xuat(b, m, n);
	cout << "\nMa tran sau khi xoa: \n";
	XoaDong(b, m, n);
	if (m > 0)
		Xuat(b, m, n);
	else
		cout << "Ma tran sau khi xoa rong";
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

int KtDong(int a[][500], int m, int n, int d)
{
	int flag = 1;
	for (int j = 0; j < n; j++)
		if (a[d][j] % 2 != 0)
			flag = 0;
	return flag;
}

void XoaDong(int a[][500], int& m, int n)
{
	for (int i = 0; i < m; i++)
		if (KtDong(a, m, n, i) == 1)
		{
			{
				XoaDong(a, m, n, i);
				i = 0;
			}
		}
	if (m == 1)
	{
		if (KtDong(a, m, n, 0) == 1)
			m--;
	}
}

void XoaDong(int a[][500], int& m, int n, int d)
{
	if (m == 1)
		m--;
	else
	{
		for (int i = d; i < m; i++)
			for (int j = 0; j < n; j++)
				a[i][j] = a[i + 1][j];
		m--;
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