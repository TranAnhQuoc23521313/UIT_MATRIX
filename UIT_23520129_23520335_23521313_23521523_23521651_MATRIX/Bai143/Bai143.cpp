#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void Nhap(int[][500], int&, int&);
int KtDong(int[][500], int, int, int);
bool KtChinhPhuong(int);
bool KtNguyenTo(int);
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
	if (m >= 1)
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

bool KtChinhPhuong(int x)
{
	if (x < 0)
		return false;
	for (int i = 0; i <= sqrt(x); i++)
		if (i * i == x)
			return true;
	return false;
}

bool KtNguyenTo(int x)
{
	int dem = 0;
	for (int i = 1; i <= x; i++)
		if (x % i == 0)
			dem++;
	return (dem == 2);
}

int KtDong(int a[][500], int m, int n, int d)
{
	int flag_1 = 0;
	int flag_2 = 0;
	for (int j = 0; j < n; j++)
	{
		if (KtChinhPhuong(a[d][j]))
			flag_1 = 1;
		if (KtNguyenTo(a[d][j]))
			flag_2 = 1;
	}
	return flag_1 * flag_2;
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
	if (m == 0)
		return;
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