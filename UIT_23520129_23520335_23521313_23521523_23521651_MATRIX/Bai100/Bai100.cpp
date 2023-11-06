#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void Nhap(int[][500], int&, int&);
int tanso(int[][500], int, int,int);
void tim(int[][500], int, int);
int main()
{
	int b[500][500];
	int m, n;
	Nhap(b, m, n);
	tim(b, m, n);
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

int tanso(int a[][500], int m, int n,int x)
{
	int dem = 1;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] == x)
				dem++;
		}
	}
	return dem;
}
void tim(int a[][500], int m, int n)
{
	int in = tanso(a, m, n, a[0][0]);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (in > tanso(a, m, n, a[i][j]))
				in = tanso(a, m, n, a[i][j]);
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (in == tanso(a, m, n, a[i][j]))
				cout << a[i][j]<<" ";
		}
	}

}