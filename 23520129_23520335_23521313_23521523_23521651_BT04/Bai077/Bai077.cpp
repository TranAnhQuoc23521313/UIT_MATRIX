#include <iostream>

using namespace std;

void Nhap(float[][500], int&, int&, int&);
float LonNhatDong(float[][500], int, int, int);

int main()
{
	float b[500][500];
	int m, n, d;
	Nhap(b, m, n, d);
	cout << LonNhatDong(b, m, n, d);
	return 0;
}

void Nhap(float a[][500], int& m, int& n, int& d)
{
	cout << "Nhap vao dong D: ";
	cin >> d;
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

float LonNhatDong(float a[][500], int m, int n, int d)
{
	float lc = a[d][0]; // Neu la cot thi la a[0][c]
	for (int j = 1; j < n; j++)
		if (a[d][j] > lc)
			lc = a[d][j];   // Neu la cot thi se la for i < m; lc = a[i][c]
	return lc;
}