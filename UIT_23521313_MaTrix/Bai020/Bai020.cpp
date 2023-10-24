#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[][500], int&, int&, int&);
bool KtDang5m(int);
void LietKe(int[][500], int, int, int);

int main()
{
	int a[500][500];
	int m, n, c;
	Nhap(a, m, n, c);
	LietKe(a, m, n, c);
	return 0;
}

void Nhap(int a[][500], int& m, int& n,int& c)
{
	cout << "Nhap vao M: ";
	cin >> m;
	cout << "Nhap vao N: ";
	cin >> n;
	cout << "Nhap vao C: ";
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

bool KtDang5m(int x)
{
	int temp = x;
	if (x <= 0)
		return false;
	if (x > 1)
	{
		while (temp > 1)
		{
			if (temp % 5 != 0)
			{
				return false;
			}
			temp /= 5;
		}
		return true;
	}
}
void LietKe(int a[][500], int m, int n, int c)
{
	for (int i = 0; i < m; i++)
		if (KtDang5m(a[i][c]) == true)
			cout << setw(8) << a[i][c];
}