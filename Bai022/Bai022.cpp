#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[][500], int&, int&);
bool KtToanLe(int x);
void LietKe(int[][500], int, int);

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

bool KtToanLe(int x)
{
	int temp = x;
	while (temp != 0)
	{
		if ((temp % 10) % 2 == 0)
			return false;
		temp /= 10;
	}
	return true;
}

void LietKe(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		if (!(1 <= i && i <= m - 2))
		{
			for (int j = 0; j < n; j++)
			{
				if (KtToanLe(a[i][j]))
    				cout << setw(8) << a[i][j];
			}
		}
		else
		{
			if (KtToanLe(a[i][0]))
				cout << setw(8) << a[i][0];
			if (KtToanLe(a[i][n - 1]))
				cout << setw(8) << a[i][n - 1];
		}

	}
}