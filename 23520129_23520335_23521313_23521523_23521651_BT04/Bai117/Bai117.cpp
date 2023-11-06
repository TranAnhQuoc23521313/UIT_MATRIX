#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
void XayDung(float[][500], int, int, float[][500], int&, int&);
void Xuat(float[][500], int, int);

int main()
{
	float a[500][500];
	float b[500][500];
	int m, n, k, l;
	Nhap(a, m, n);
	XayDung(a, m, n, b, k, l);
	Xuat(b, k, l);
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

void XayDung(float Matrix_a[][500], int m, int n, float Matrix_b[][500], int& k, int& l)
{
	k = m;
	l = n;
	for (int i = 0; i < k; i++)
		for (int j = 0; j < l; j++)
			Matrix_b[i][j] = abs(Matrix_a[i][j]); 
}

void Xuat(float b[][500], int k, int l)
{
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
			cout << setw(8) << b[i][j];
		cout << endl;
	}
}


/* Bai nay code khong loi nhung chay khong duoc do cau hinh may chay khong noi*/