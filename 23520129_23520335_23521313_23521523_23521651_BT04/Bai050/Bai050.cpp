#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
int KtCucDai(float[][500], int, int, int, int);
float TongCucDai(float[][500], int, int);

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
//	KtCucDai(b, m, n);
	cout << TongCucDai(b, m, n);
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

int KtCucDai(float a[][500], int m, int n, int d, int c)
{
	int di[8] = { -1,-1,-1,0,+1,+1,+1,0 };
	int dj[8] = { -1,0,+1,+1,+1,0,-1,-1 };
	for (int k = 0; k < 8; k++)
		if (d + di[k] >= 0 && d + di[k] < m && c + dj[k] >= 0 && c + dj[k] < n && a[d + di[k]][c + dj[k]] > a[d][c])
			return 0;
	return 1;
}

float TongCucDai(float a[][500], int m, int n)
{
	float s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (KtCucDai(a, m, n, i, j) == 1)
				s = s + a[i][j];
		}
	return s;
}
