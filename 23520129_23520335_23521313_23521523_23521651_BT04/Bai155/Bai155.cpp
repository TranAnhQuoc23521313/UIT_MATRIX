#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
void DichXuongCot(float[][500], int, int, int);
void DichXuong(float[][500], int, int);
void Xuat(float[][500], int, int);

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << "Ma tran truoc khi dich: \n";
	Xuat(b, m, n);
	cout << "\nMa tran sau khi dich: \n";
	DichXuong(b, m, n);
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

void DichXuongCot(float a[][500], int m, int n, int c)
{
	float temp = a[m-1][c];
	for (int i = m - 1; i >= 1; i--)
		a[i][c] = a[i - 1][c];
	a[0][c] = temp;
	
}

void DichXuong(float a[][500], int m, int n)
{
	for (int j = 0; j < n; j++)
		DichXuongCot(a, m, n, j);
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