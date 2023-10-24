#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
float TongDuong(float[][500], int, int);
int DemDuong(float[][500], int, int);
float TbcDuong(float[][500], int, int);

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << fixed << setprecision(2) << TbcDuong(b, m, n);
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

float TongDuong(float a[][500], int m, int n)
{
	float s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0)
				s += a[i][j];
	return s;
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

float TbcDuong(float a[][500], int m, int n)
{
	return TongDuong(a, m, n) / DemDuong(a, m, n);
}