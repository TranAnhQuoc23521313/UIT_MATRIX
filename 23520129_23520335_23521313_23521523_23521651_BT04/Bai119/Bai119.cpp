#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void Nhap(float[][100], int&, int&);
void XayDung(float[][100], int, int,float[][100]);
int DemLanCan(float[][100], int, int, int, int);

int main()
{
	float a[100][100];
	float b[100][100];
	int m, n;
	Nhap(a, m, n);
	XayDung(a, m, n, b);
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

void XayDung(float a[][100], int m, int n, float b[][100])
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			b[i][j] = DemLanCan(a, m, n, i, j);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) cout << b[i][j] << " ";
		cout << endl;
	}
}

int DemLanCan(float a[][100], int m, int n,int d, int c)
{
	int dem = 0;
	for (int di = -1; di <= 1; di++)
		for (int dj = -1; dj <= 1; dj++)
			if (d + di >= 0 && d + di < m && c + dj >= 0 &&c + dj < n && !(di == 0 && dj == 0) &&a[d + di][c + dj]>0)
				dem++;
	return dem;
}
