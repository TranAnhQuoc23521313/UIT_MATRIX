#include <iostream>

using namespace std;

void Nhap(int[][500], int&, int&);
int NguyenToDau(int[][500], int, int);
int NguyenToLonNhat(int[][500], int, int);
bool KtNguyenTo(int);

int main()
{
	int b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << NguyenToLonNhat(b, m, n);
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

bool KtNguyenTo(int x)
{
	int dem = 0;
	for (int i = 1; i <= x; i++)
		if (x % i == 0)
			dem++;
	return (dem == 2);
}

int NguyenToDau(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtNguyenTo(a[i][j]))
				return a[i][j];
	return -1;
}

int NguyenToLonNhat(int a[][500], int m, int n)
{
	int lc = NguyenToDau(a, m, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (lc < a[i][j] && KtNguyenTo(a[i][j]))
				lc = a[i][j];
	return lc;
}