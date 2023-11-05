#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void Nhap(int[][500], int&, int&);
bool kt(int[][500], int, int);
int main()
{
	int b[500][500];
	int m, n;
	Nhap(b, m, n);
	if (kt(b, m, n) == true)
		cout << "Tang";
	else
		cout << "Ko tang";
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
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

bool kt(int a[][500], int m, int n)
{
	int d;
	cin >> d;
	for (int j = 0; j < n-1; j++)
	{
		for (int i = j; i < n; i++)
		{
			if (a[d-1][j] > a[d-1][i])
				return false;
		}
	}
	return true;
}