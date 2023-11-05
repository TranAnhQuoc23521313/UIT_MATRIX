#include <iostream>

using namespace std;

void Nhap(float[][500], int&, int&);
float TongAm(float[][500], int, int);

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << TongAm(b, m, n);
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

float TongAm(float a[][500], int m, int n)
{
	float s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] < 0)
				s += a[i][j];
	return s;
}