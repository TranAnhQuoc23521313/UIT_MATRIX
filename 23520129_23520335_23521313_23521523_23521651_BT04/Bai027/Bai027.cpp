#include <iostream>

using namespace std;

void Nhap(int[][500], int&, int&);
int TongNguyenTo(int[][500], int, int);
bool CheckPrime(int x);

int main()
{
	int b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << TongNguyenTo(b, m, n);
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

bool CheckPrime(int x)
{
	int dem = 0;
	for (int i = 1; i <= x; i++)
		if (x % i == 0)
			dem++;
	return (dem == 2);
}

int TongNguyenTo(int a[][500], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (CheckPrime(a[i][j]))
				s += a[i][j];
	return s;
}