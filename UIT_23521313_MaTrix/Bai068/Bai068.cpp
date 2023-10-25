#include <iostream>

using namespace std;

void Nhap(int[][500], int&, int&);
int DemChuSo(int);
int DemChuSo(int[][500], int, int);

int main()
{
	int b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << DemChuSo(b, m, n);
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

int DemChuSo(int x)
{
	int temp = x;
	int dem = 0;
	while (temp != 0)
	{
		dem++;
		temp /= 10;
	}
	return dem;
}

int DemChuSo(int a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			dem += DemChuSo(a[i][j]);
	return dem;
}