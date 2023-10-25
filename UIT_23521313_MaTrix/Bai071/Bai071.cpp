#include <iostream>

using namespace std;

void Nhap(float[][500], int&, int&);
int DemCucTieu(float[][500], int, int);
int KtCucTieu(float[][500], int, int, int, int);
int DemCucDai(float[][500], int, int);
int KtCucDai(float[][500], int, int, int, int);
int DemCucTri(float[][500], int, int);

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << DemCucTri(b, m, n);
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
	int di[8] = { -1,-1,-1,0,1,1,1,0 };
	int dj[8] = { -1,0,1,1,1,0,-1,-1 };
	int flag = 1;
	for (int vt = 0; vt < 8; vt++)
		if (0 <= d + di[vt] && d + di[vt] < m && 0 <= c + dj[vt] && c + dj[vt] < n)
			if (a[d][c] < a[d + di[vt]][c + dj[vt]])
				flag = 0;
	return flag;
}

int KtCucTieu(float a[][500], int m, int n, int d, int c)
{
	int di[8] = { -1,-1,-1,0,1,1,1,0 };
	int dj[8] = { -1,0,1,1,1,0,-1,-1 };
	for (int vt = 0; vt < 8; vt++)
		if (0 <= d + di[vt] && d + di[vt] < m && 0 <= c + dj[vt] && c + dj[vt] < n)
			if (a[d][c] > a[d + di[vt]][c + dj[vt]])
				return 0;
	return 1;
}

int DemCucDai(float a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtCucDai(a,m,n,i,j) == 1)
				dem++;
	return dem;
}

int DemCucTieu(float a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtCucTieu(a, m, n, i, j) == 1)
				dem++;
	return dem;
}

int DemCucTri(float a[][500], int m, int n)
{
	int CucDai = DemCucDai(a, m, n);
	int CucTieu = DemCucTieu(a, m, n);
	return (CucDai + CucTieu);
}