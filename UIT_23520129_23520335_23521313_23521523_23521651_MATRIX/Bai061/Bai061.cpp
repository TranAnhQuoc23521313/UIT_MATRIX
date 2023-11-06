#include <iostream>
using namespace std;

void Nhap(int[][500], int&, int&, int&);
bool ktHoanThien(int);
int DemHoanThien(int[][500], int, int, int);

int main()
{
	int b[500][500];
	int m, n, d;
	Nhap(b, m, n, d);
	cout << "So luong so hoan thien tren mot dong trong ma tran: " << DemHoanThien(b, m, n, d);
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

bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s = s + i;
	return (s == k);
}

int DemHoanThien(int a[][500], int m, int n, int d)
{
	int dem;
	dem = 0;
	for (int j = 0; j < n; j++)
		if (ktHoanThien(a[d][j]))
			dem++;
	return dem;
}