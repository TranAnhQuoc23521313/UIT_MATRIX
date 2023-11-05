#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void Nhap(float[][100], int&, int&);
float LonNhatDong(float[][100], int, int, int);
float LonNhatCot(float[][100], int, int, int);
void XayDung(float[][100], int, int,float[][100]);

int main()
{
	float a[100][100];
	float b[100][100];
	int m, n;
	Nhap(a, m, n);
	XayDung(a, m, n,b);
	return 0;
}

void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap vao M: ";
	cin >> m;
	cout << "Nhap vao N: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) cin >> a[i][j];
	}
}
float LonNhatDong(float a[][100], int m, int n, int d)
{
	float lc = a[d][0];
	for (int j = 0; j < n; j++)

		if (a[d][j] > lc)
			lc = a[d][j];
	return lc;
}
float LonNhatCot(float a[][100], int m, int n, int c)
{
	float lc = a[0][c];
	for (int i = 0; i < m; i++)
		if (a[i][c] > lc)
			lc = a[i][c];
	return lc;
}

void XayDung(float a[][100], int m, int n, float b[][100])
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			float lnd = LonNhatDong(a, m, n, i);
			float lnc = LonNhatCot(a, m, n, j);
			if (lnd < lnc)
				b[i][j] = lnc;
			else
				b[i][j] = lnd;
		}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) cout << b[i][j] << " ";
		cout << endl;
	}
}
