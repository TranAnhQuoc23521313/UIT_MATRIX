#include <iostream>

using namespace std;

void Nhap(int[][500], int&, int&, int&);
int TichCot(int[][500], int, int, int);

int main()
{
	int b[500][500];
	int m, n, c;
	Nhap(b, m, n, c);
	cout << TichCot(b, m, n, c);
	return 0;
}

void Nhap(int a[][500], int& m, int& n, int& c)
{
	cout << "Nhap vao M: ";
	cin >> m;
	cout << "Nhap vao N: ";
	cin >> n;
	cout << "Nhap vao cot C: ";
	cin >> c;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap vao gia tri A[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

int TichCot(int a[][500], int m, int n, int c)
{
	int t = 1;
	for (int i = 0; i < m; i++)
		if (a[i][c] % 2 == 0)
			t *= a[i][c];
	return t;
}