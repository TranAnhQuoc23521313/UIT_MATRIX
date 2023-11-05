#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&, int&);
void Xuat(float[][500], int, int);
float NhoNhatCot(float[][500], int, int, int);

int main()
{
	float b[500][500];
	int m, n, cot;
	Nhap(b, m, n, cot);
	cout << "Ma tran A: " << endl;
	Xuat(b, m, n);
	float min_cot = NhoNhatCot(b, m, n, cot);
	cout << "Gia tri nho nhat tren cot " << cot << " la " << min_cot;
	return 0;
}

void Nhap(float a[][500], int& m, int& n, int& cot)
{
	cout << "Nhap vao cot C: ";
	cin >> cot;
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

float NhoNhatCot(float a[][500], int m, int n, int cot)
{
	float lc = a[0][cot];
	for (int i = 1; i < m; i++)
		if (lc > a[i][cot])
			lc = a[i][cot];
	return lc;
}