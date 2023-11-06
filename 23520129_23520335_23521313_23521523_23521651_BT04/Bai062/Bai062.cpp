#include <iostream>
using namespace std;

void Nhap(int[][500], int&, int&, int&);
int DemLeDong(int[][500], int, int, int);

int main()
{
	int b[500][500];
	int m, n, d;
	Nhap(b, m, n, d);
	cout << "So luong so le tren mot dong trong ma tran: " << DemLeDong(b, m, n, d);
	return 0;
}

void Nhap(int a[][500], int& m, int& n, int& d)
{
	cout << "Nhap dong d: ";
	cin >> d;
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap gia tri A[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}


int DemLeDong(int a[][500], int m, int n, int d)
{
	int dem;
	dem = 0;
	for (int j = 0; j < n; j++)
		if (a[d][j] % 2 != 0)
			dem++;
	return dem;
}