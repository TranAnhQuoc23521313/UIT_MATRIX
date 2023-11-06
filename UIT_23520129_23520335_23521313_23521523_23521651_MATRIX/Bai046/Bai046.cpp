#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
float TichDuong(float[][500], int, int);
int DemDuong(float[][500], int, int);
float TbnDuong(float[][500], int, int);

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << fixed << setprecision(2) << TbnDuong(b, m, n);
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

float TichDuong(float a[][500], int m, int n)
{
	float t=1;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0)
				t *= a[i][j];
	return t;
}

int DemDuong(float a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0)
				dem++;
	return dem;
}

float TbnDuong(float a[][500], int m, int n)
{
	
	float T = TichDuong(a, m, n);
	int dem = DemDuong(a, m, n);
	return pow(T, (float)1 / dem);
}