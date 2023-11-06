#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[][500], int&, int&, int&);
bool KtHoanThien(int);
void LietKe(int[][500], int, int, int);

int main()
{
	int a[500][500];
	int m, n, d;
	Nhap(a, m, n, d);
	LietKe(a, m, n, d);
	return 0;
}

void Nhap(int a[][500], int& m, int& n,int& d)
{
	cout << "Nhap vao M: ";
	cin >> m;
	cout << "Nhap vao N: ";
	cin >> n;
	cout << "Nhap vao D: ";
	cin >> d;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap vao gia tri A[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

bool KtHoanThien(int x)
{
	int s = 0;
	for (int i = 1; i < x; i++)
		if (x % i == 0)
			s += i;
	return (s == x);
}

void LietKe(int a[][500], int m, int n, int d)
{
	for (int j = 0; j < n; j++)
		if (KtHoanThien(a[d][j]))
			cout << setw(8) << a[d][j];
}