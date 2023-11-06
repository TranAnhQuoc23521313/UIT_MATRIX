#include <iostream>

using namespace std;

void Nhap(float[][500], int&, int&,float&,float&);
float Tong(float[][500], int, int, float, float);

int main()
{
	float b[500][500];
	int m, n;
	float x, y;
	Nhap(b, m, n, x, y);
	cout << Tong(b, m, n, x, y);
	return 0;
}

void Nhap(float a[][500], int& m, int& n,float &x,float &y)
{
	cout << "Nhap vao M: ";
	cin >> m;
	cout << "Nhap vao N: ";
	cin >> n;
	cout << "Nhap vao gia tri X: ";
	cin >> x;
	cout << "Nhap vao gia tri Y: ";
	cin >> y;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap vao gia tri A[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

float Tong(float a[][500], int m, int n, float x, float y)
{
	float s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (x <= a[i][j] && a[i][j] <= y)
				s += a[i][j];
	return s;
}