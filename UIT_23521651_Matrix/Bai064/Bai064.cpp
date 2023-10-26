#include <iostream>
using namespace std;

void Nhap(int[][500], int&, int&, int&);
int DemNguyenTo(int[][500], int, int, int);
bool ktNguyenTo(int);

int main()
{
	int b[500][500];
	int m, n, d;
	Nhap(b, m, n, d);
	cout << "So luong so nguyen to tren mot cot trong ma tran: " << DemNguyenTo(b, m, n, d);
	return 0;
}

void Nhap(int a[][500], int& m, int& n, int& d)
{
	cout << "Nhap cot d: ";
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

bool ktNguyenTo(int a)
{
	for (int i = 2; i < a; i++)
		if (a % i == 0)
			return false;
	return true;
}

int DemNguyenTo(int a[][500], int m, int n, int d)
{
	int dem;
	dem = 0;
	for (int i = 0; i < n; i++)
		if (ktNguyenTo(a[i][d]))
			dem++;
	return dem;
}