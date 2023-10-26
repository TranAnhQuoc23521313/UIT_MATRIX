#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
void ThemCot(float[][500], int, int&);
float NhoNhatDong(float[][500], int, int, int);
void Xuat(float[][500], int, int);

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << "Ma tran truoc khi them: \n";
	Xuat(b, m, n);
	cout << "\nMa tran sau khi them: \n";
	ThemCot(b, m, n);
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

float NhoNhatDong(float a[][500], int m, int n, int d)
{
	float lc = a[d][0];
	for (int j = 0; j < n; j++)
		if (a[d][j] < lc)
			lc = a[d][j];
	return lc;
}

void ThemCot(float a[][500], int m, int& n)
{
	for (int i = 0; i < m; i++)
		a[i][n] = NhoNhatDong(a, m, n, i);
	n++;
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