#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void Nhap(int[][500], int&, int&);
bool kt(int[][500], int, int);
void Xuat(int[][500], int, int);
int main()
{
	int b[500][500];
	int m, n;
	Nhap(b, m, n);
	Xuat(b, m, n);
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

bool kt(int a[][500], int m, int c)
{
	for (int i = 0; i < m - 1; i++)
	{
		for (int j = i + 1; j < m; j++)
		{
			if (a[i][c] > a[j][c])
				return false;
		}
	}
	return true;
}
void Xuat(int a[][500], int m, int n)
{
	for (int c = 0; c < n; c++)
	{
		if (kt(a, m, c) == true)
		{
			for (int i = 0; i < m; i++) cout << a[i][c] << endl;
		}
	}
}
