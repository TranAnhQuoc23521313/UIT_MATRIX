#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void Nhap(int a[][500], int&, int&);
void LietKe(int a[][500], int, int);
bool SquareNumber(int x);

int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);
	LietKe(a, m, n);
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
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap vao gia tri A[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

bool SquareNumber(int x)
{
	if (x < 0)
		return false;
	for (int i = 0; i <= sqrt(x); i++)
		if (i * i == x)
			return true;
	return false;
}

void LietKe(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (SquareNumber(a[i][j]))
				cout << setw(8) << a[i][j];
}