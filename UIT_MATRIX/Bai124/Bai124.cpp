#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void HoanVi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}
void Nhap(float a[][500], int& m, int& n, int& c)
{
	cout << "Nhap vao M: ";
	cin >> m;
	cout << "Nhap vao N: ";
	cin >> n;
	cout << "Nhap cot can sap xep:";
	cin >> c;
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
void SapCotTang(float a[][500], int m, int n, int c)
{
	for (int i = 0; i <= m - 2; i++)
		for (int j = i + 1; j <= m - 1; j++)
			if (a[i][c] > a[j][c])
				HoanVi(a[i][c], a[j][c]);
}
int main()
{
	float b[500][500];
	int m, n, c;
	Nhap(b, m, n, c);
	SapCotTang(b, m, n, c);
	Xuat(b, m, n);
	return 0;
}