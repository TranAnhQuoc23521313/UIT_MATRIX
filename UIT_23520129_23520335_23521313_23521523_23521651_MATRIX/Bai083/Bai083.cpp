#include <iostream>

using namespace std;

void Nhap(float[][500], int&, int&);
float DuongDau(float[][500], int, int);
float DuongNhoNhat(float[][500], int, int);

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << DuongNhoNhat(b, m, n);
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

float DuongDau(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0)
				return a[i][j];
	return -1;
}

float DuongNhoNhat(float a[][500], int m, int n)
{
	float lc = DuongDau(a, m, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (lc > a[i][j] && a[i][j] > 0)
				lc = a[i][j];
	return lc;
}