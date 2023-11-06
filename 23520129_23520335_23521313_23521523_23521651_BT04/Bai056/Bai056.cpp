#include <iostream>
#include <cmath>

using namespace std;

void Nhap(int[][500], int&, int&);
int DemHoanThien(int[][500], int, int);
bool KtHoanThien(int);

int main()
{
	int b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << DemHoanThien(b, m, n);
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

bool KtHoanThien(int x)
{
	if (x < 0)
		return false;
	int s = 0;
	for (int i = 1; i <= sqrt(x); i++)
		if (x % i == 0)
			s += i;
	return (s == x);
}

int DemHoanThien(int a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtHoanThien(a[i][j]))
				dem++;
	return dem;
}