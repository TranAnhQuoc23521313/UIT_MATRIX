#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[][500], int&, int&, int&);
bool KtDang3m(int);
void LietKe(int[][500], int, int, int);

int main()
{
	int a[500][500];
	int m, n, d;
	Nhap(a, m, n, d);
	LietKe(a, m, n, d);
	return 0;
}

void Nhap(int a[][500], int& m, int& n, int& d)
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

bool KtDang3m(int x)
{
	int temp = x;
	if (x == 0)
		return false;
	while (temp > 1)
	{
		if (temp % 3 != 0)
			return false;
		temp /= 3;
	}
	return true;
}

void LietKe(int a[][500], int m, int n,int d)
{
	for (int j = 0; j < n; j++)
		if (KtDang3m(a[d][j]))
			cout << setw(8) << a[d][j];
}