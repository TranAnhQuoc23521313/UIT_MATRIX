#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&, int&);
void ThemDong(float[][500], int&, int, int);
void Xuat(float[][500], int, int);

int main()
{
	float b[500][500];
	int m, n, d;
	Nhap(b, m, n, d);
	cout << "Ma tran truoc khi them: \n";
	Xuat(b, m, n);
	ThemDong(b, m, n, d);
	cout << "\nMa tran sau khi them: \n";
	Xuat(b, m, n);
	return 0;
}

void Nhap(float a[][500], int& m, int& n,int& d)
{
	cout << "Nhap vao dong D: ";
	cin >> d;
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

void ThemDong(float a[][500], int& m, int n, int d)
{
	for (int i = m; i >= d; i--)
		for (int j = 0; j < n; j++)
			a[i][j] = a[i - 1][j];
	for (int j = 0; j < n; j++)
		a[d][j] = 1;
	m++;
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