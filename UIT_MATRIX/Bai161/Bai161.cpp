#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
void Xoay90(float[][500], int, int);

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << "Ma tran truoc khi xoay 90 do: " << endl;
	Xuat(b, m, n);
	Xoay90(b, m, n);
	cout << "Ma tran sau khi xoay 90 do: " << endl;
	Xuat(b, m, n);
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

void Xoay90(float a[][500], int m, int n)
{
	float c[500][500];
	int k, l;
	l = m;
	k = n;
	for (int i = 0; i < k; i++)
		for (int j = 0; j < l; j++)
			c[i][j] = a[j][n - 1 - i];
	m = k;
	n = l;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = c[i][j];
}