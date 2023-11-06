#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void Nhap(int[][500], int&, int&);
int kt(int[][500], int, int);
void LietKe(int[][500], int, int);
int main()
{
	int b[500][500];
	int m, n;
	Nhap(b, m, n);
	LietKe(b, m, n);
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

int ktCot(int a[][500], int m, int n, int c)
{

	for (int i = 0; i < m; i++)
	{
		for (int k = 1; (k * k) <= a[i][c]; k++)
		{
			if ((k * k) == a[i][c])
				return 1;
		}
	}
	return 0;
}
void LietKe(int a[][500], int m, int n)
{
	for (int j = 0; j < n; j++)
		if (ktCot(a, m, n, j) == 1)
			cout << setw(8) << j;
}