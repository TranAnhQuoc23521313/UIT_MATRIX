#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void Nhap(float[][100], int&, int&);
void SapDongTang(float[][100], int, int, int);
void HoanVi(float&, float&);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	int d;
	cin >> d;
	SapDongTang(a, m, n, d);
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
void SapDongTang(float a[][100], int m, int n, int d)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[d][i] > a[d][j])
				HoanVi(a[d][i], a[d][j]);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) cout << a[i][j] << " ";
		cout << endl;
	}
}

