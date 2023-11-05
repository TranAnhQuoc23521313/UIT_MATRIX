#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[][500], int&, int&, int&);
void LietKe(int[][500], int, int, int);

int main()
{
	int a[500][500];
	int m, n, c;
	Nhap(a, m, n, c);
	LietKe(a, m, n, c);
	return 0;
}

void Nhap(int a[][500], int& m, int& n, int& c)
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

void LietKe(int a[][500], int m, int n, int c)
{
	for (int i = 0; i < m; i++)
		if (a[i][c] % 2 == 0)
			cout << setw(8) << a[i][c];
}