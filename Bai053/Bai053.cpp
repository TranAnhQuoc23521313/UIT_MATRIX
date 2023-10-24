#include <iostream>
#include <cmath>

using namespace std;

void Nhap(int[][500], int&, int&);
int DemChinhPhuong(int[][500], int, int);
bool KtChinhPhuong(int x);
int main()
{
	int b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << DemChinhPhuong(b, m, n);
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

int DemChinhPhuong(int a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtChinhPhuong(a[i][j]))
				dem++;
	return dem;
}