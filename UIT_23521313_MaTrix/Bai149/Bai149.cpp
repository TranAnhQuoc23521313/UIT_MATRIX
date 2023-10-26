#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
void ThemDong(float[][500], int&, int);
float LonNhatCot(float[][500], int, int, int);
void Xuat(float[][500], int, int);

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << "Ma tran truoc khi them: \n";
	Xuat(b, m, n);
	ThemDong(b, m, n);
	cout << "\nMa tran sau khi them: \n";
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

float LonNhatCot(float a[][500], int m, int n, int c)
{
	float lc = a[0][c];
	for (int i = 0; i < m; i++)
		if (a[i][c] > lc)
			lc = a[i][c];
	return lc;
}

void ThemDong(float a[][500], int& m, int n)
{
	for (int j = 0; j < n; j++)
		a[m][j] = LonNhatCot(a, m, n, j);
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