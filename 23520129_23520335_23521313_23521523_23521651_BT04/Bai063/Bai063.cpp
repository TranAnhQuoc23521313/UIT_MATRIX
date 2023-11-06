#include <iostream>
using namespace std;

void Nhap(float[][500], int&, int&, int&);
int DemAmCot(float[][500], int, int, int);

int main()
{
	float b[500][500];
	int m, n, d;
	Nhap(b, m, n, d);
	cout << "So luong so am tren mot cot trong ma tran: " << DemAmCot(b, m, n, d);
	return 0;
}

void Nhap(float a[][500], int& m, int& n, int& d)
{
	cout << "Nhap cot d: ";
	cin >> d;
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap gia tri A[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}


int DemAmCot(float a[][500], int m, int n, int d)
{
	int dem;
	dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i][d] < 0)
			dem++;
	return dem;
}