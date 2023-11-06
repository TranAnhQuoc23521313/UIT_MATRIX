#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void Nhap(int[][500], int&, int&);
void xuat(int[][500], int, int);
bool kt(int[][500], int, int);
int main()
{
	int b[500][500];
	int m, n;
	Nhap(b, m, n);
	xuat(b, m, n);
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
		for (int j = 0; j < n; j++) cin >> a[i][j];
	}
}

bool kt(int a[][500], int n, int d)
{

	for (int j = 0; j < n; j++)
	{
		if (a[d][j] >=0)
			return false;
	}
	return true;
}

void xuat(int a[][500], int m ,int n)
{
	for (int i = 0; i < m; i++)
	{
		if (kt(a, n, i) == true)
		{
			for (int j = 0; j < n; j++)
				cout << a[i][j] << " ";
		}
	}
}

