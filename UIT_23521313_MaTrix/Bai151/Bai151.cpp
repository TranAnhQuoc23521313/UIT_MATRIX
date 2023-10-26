#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
float TongCot(float[][500], int, int, int);
void ThemDong(float[][500], int&, int);
void Xuat(float[][500], int, int);

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << "Ma tran truoc khi them dong: \n";
	Xuat(b, m, n);
	cout << "\nMa tran sau khi them dong: \n";
	ThemDong(b, m, n);
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

float TongCot(float a[][500], int m, int n, int c)
{
	float s = 0;
	for (int i = 0; i < m; i++)
		s += a[i][c];
	return s;
}

void ThemDong(float a[][500], int& m, int n)
{
	for (int j = 0; j < n; j++)
		a[m][j] = TongCot(a, m, n, j);
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