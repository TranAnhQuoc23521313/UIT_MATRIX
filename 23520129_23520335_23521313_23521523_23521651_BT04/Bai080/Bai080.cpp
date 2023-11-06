#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
float LonNhat(float[][500], int, int);
float LonNhatDong(float[][500], int, int, int);
void LietKe(float[][500], int, int);

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	LietKe(b, m, n);
	return 0;
}

void Nhap(float a[][500], int& m, int& n)
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

float LonNhat(float a[][500], int m, int n)
{
	float lc = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > lc)
				lc = a[i][j];
	return lc;
}

float LonNhatDong(float a[][500], int m, int n, int d)
{
	float lc = a[d][0];
	for (int j = 1; j < n; j++)
		if (a[d][j] > lc)
			lc = a[d][j];
	return lc;
}

void LietKe(float a[][500], int m, int n)
{
	float max = LonNhat(a, m, n);
	for (int i = 0; i < m; i++)
		if (max == LonNhatDong(a, m, n, i))
			cout << setw(8) << i;
}