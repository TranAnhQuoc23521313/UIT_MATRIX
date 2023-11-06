#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void Nhap(int[][500], int&, int&);
bool kt(int);
bool tim(int[][500], int, int);
int main()
{
	int b[500][500];
	int m, n;
	Nhap(b, m, n);
	if (tim(b, m, n) == true)
		cout << "TT";
	else
		cout << "Ko TT";
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

bool kt(int a)
{
	int s = 0;
	for (int i = 1; i < a; i++)
	{
		if (a % i == 0) s = s + i;
	}
	if (a == s)
		return true;
	return false;
}
bool tim(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (kt(a[i][j]) == true)
				return true;
	}
	return false;
}