#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
void DichPhaiDong(float[][500], int, int, int);
void DichPhai(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	Nhap(a, m, n);
	cout << "Ma tran truoc khi dich phai xoay vong cac cot: " << endl;
	Xuat(a, m, n);
	DichPhai(a, m, n);
	cout << "Ma tran sau khi dich phai xoay vong cac cot: " << endl;
	Xuat(a, m, n);
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

void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

void DichPhaiDong(float a[][500], int m, int n, int d)
{
	float temp = a[d][n-1];
	for (int j = n-1; j >= 1; j--)
		a[d][j] = a[d][j - 1];
	a[d][0] = temp;
}

void DichPhai(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		DichPhaiDong(a, m, n, i);
}