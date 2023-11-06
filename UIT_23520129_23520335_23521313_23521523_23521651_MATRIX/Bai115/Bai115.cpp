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

bool kt(int a[][500], int n,int d)
{
	for (int j = 0; j < n - 1; j++)
	{
		for (int i = j+1; i < n; i++)
		{
			if (a[d][j] < a[d][i])
				return false;
		}
	}
	return true;
}
void Xuat(int a[][500],int m,int n)
{
	for (int d = 0; d < m; d++)
	{
		if (kt(a, n, d) == true)
		{
			for (int j = 0; j < n; j++) cout << a[d][j]<<" ";
		}
	}
}
