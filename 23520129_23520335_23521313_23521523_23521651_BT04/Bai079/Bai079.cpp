#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
float NhoNhat(float[][500], int, int);
int DemNhoNhat(float[][500], int, int);
void Xuat(float[][500], int, int);

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << "Ma tran A: " << endl;
	Xuat(b, m, n);
	int dem = DemNhoNhat(b,m,n);
	cout << "So luong gia tri nho nhat trong ma tran A: " << dem;
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

float NhoNhat(float a[][500], int m, int n)
{
	float lc = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (lc > a[i][j])
				lc = a[i][j];
	return lc;
}

int DemNhoNhat(float a[][500], int m, int n)
{
	int dem = 0;
	int lc = NhoNhat(a, m, n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] == lc)
				dem++;
	return dem;
}