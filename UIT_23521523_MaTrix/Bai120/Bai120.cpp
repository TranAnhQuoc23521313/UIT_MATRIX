#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void Nhap(float[][100], int&, int&);
void HoanViDong(float[][100], int, int, int,int);
void HoanVi(float&, float&);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	int d1, d2;
	cin >> d1 >> d2;
	HoanViDong(a, m, n, d1, d2);
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

void HoanVi(float& a, float& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void HoanViDong(float a[][100], int m, int n, int d1, int d2)
{
	for (int j = 0; j < n; j++)
		HoanVi(a[d1][j], a[d2][j]);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) cout << a[i][j]<<" ";
		cout << endl;
	}
}

