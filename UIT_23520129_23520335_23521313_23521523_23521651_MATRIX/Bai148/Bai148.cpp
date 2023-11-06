#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&, int&);
void ThemCot(float[][500], int, int&, int);
void Xuat(float[][500], int, int);

int main()
{
	float b[500][500];
	int m, n, c;
	Nhap(b, m, n, c);
	cout << "Ma tran truoc khi them cot: \n";
	Xuat(b, m, n);
	ThemCot(b, m, n, c);
	cout << "\nMa tran sau khi them cot: \n";
	Xuat(b, m, n);
	return 0;
}

void Nhap(float a[][500], int& m, int& n, int& c)
{
	cout << "Nhap vao cot C: ";
	cin >> c;
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

void ThemCot(float a[][500], int m, int& n, int c)
{
	for (int i = 0; i < m; i++)
		for (int j = n; j >= c; j--)
			a[i][j] = a[i][j - 1];
	for (int i = 0; i < m; i++)
		a[i][c] = 0;
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