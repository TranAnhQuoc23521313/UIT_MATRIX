#include <iostream>

using namespace std;

void Nhap(float[][500], int&, int&, float&);
int TanSuat(float[][500], int, int, float);

int main()
{
	float b[500][500];
	int m, n;
	float x;
	Nhap(b, m, n,x);
	cout << TanSuat(b, m, n, x);
	return 0;
}

void Nhap(float a[][500], int& m, int& n,float& x)
{
	cout << "Nhap vao gia tri X: ";
	cin >> x;
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

int TanSuat(float a[][500], int m, int n, float x)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] == x)
				dem++;
	return dem;
}