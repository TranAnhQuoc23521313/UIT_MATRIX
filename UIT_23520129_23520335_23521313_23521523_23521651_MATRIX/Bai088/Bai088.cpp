#include <iostream>

using namespace std;

void Nhap(float[][500], int&, int&);
float TongDong(float[][500], int, int, int);
float TongLonNhat(float[][500], int, int);

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << TongLonNhat(b, m, n);
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

float TongDong(float a[][500], int m, int n, int d)
{
	float s = 0;
	for (int j = 0; j < n; j++)
		s += a[d][j];
	return s;
}

float TongLonNhat(float a[][500], int m, int n)
{
	float lc = TongDong(a, m, n, 0);
	for (int i = 1; i < m; i++)
		if (lc < TongDong(a, m, n, i))
			lc = TongDong(a, m, n, i);
	return lc;
		
}