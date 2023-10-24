#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
int ktCucTieu(float[][500], int, int, int, int);
void LietKe(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	Nhap(a, m, n);
	LietKe(a, m, n);
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

int	ktCucTieu(float a[][500], int m, int n, int y,int x)
{		
	int di[8] = { -1,-1,-1,0,1,1,1,0 };
	int dj[8] = { -1,0,1,1,1,0,-1,-1 };
	for (int vt = 0; vt < 8; vt++)
		if (0 <= y + di[vt] && y + di[vt] < m && 0 <= x + dj[vt] && x + dj[vt] < n)
			if (a[y][x] > a[y + di[vt]][x + dj[vt]])
				return 0;
	return 1;
	
}

void LietKe(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (ktCucTieu(a, m, n, i,j) == 1)
				cout << setw(8) << a[i][j];
		}
}