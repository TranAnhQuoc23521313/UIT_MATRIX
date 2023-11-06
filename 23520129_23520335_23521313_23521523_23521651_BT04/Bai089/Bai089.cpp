#include <iostream>

using namespace std;

void Nhap(float[][500], int&, int&);
float TongCot(float[][500], int, int, int);
float TongNhoNhat(float[][500], int, int);

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << TongNhoNhat(b, m, n);
	return 0;
}

void Nhap(float a[][500], int& m, int& n)
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

float TongCot(float a[][500], int m, int n, int c)
{
	float s = 0;
	for (int i = 0; i < m; i++)
		s += a[i][c];
	return s;
}

float TongNhoNhat(float a[][500], int m, int n)
{
	float lc = TongCot(a, m, n, 0);
	for (int j = 1; j < n; j++)
		if (lc > TongCot(a, m, n, j))
			lc = TongCot(a, m, n, j);
	return lc;
}