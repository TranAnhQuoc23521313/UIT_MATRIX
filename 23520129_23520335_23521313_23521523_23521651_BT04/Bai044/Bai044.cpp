#include <iostream>

using namespace std;

void Nhap(float[][500], int&, int&, int&);
float TichCot(float[][500], int, int, int);

int main()
{
	float b[500][500];
	int m, n, c;
	Nhap(b, m, n, c);
	cout << TichCot(b, m, n, c);
	return 0;
}

void Nhap(float a[][500], int& m, int& n, int& c)
{
	cout << "Nhap vao M: ";
	cin >> m;
	cout << "Nhap vao N: ";
	cin >> n;
	cout << "Nhap vao cot C: ";
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

float TichCot(float a[][500], int m, int n, int c)
{
	float t = 1;
	for (int i = 0; i < m; i++)
		if (-1 <= a[i][c] && a[i][c] <= 0)
			t *= a[i][c];
	return t;
}