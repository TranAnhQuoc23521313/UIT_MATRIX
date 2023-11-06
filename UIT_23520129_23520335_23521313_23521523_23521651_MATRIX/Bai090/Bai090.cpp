#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
float TongDong(float[][500], int, int, int);
float TongLonNhat(float[][500], int, int);
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

/* Y nghia co ham nay la tinh tong tung dong*/

float TongDong(float a[][500], int m, int n, int d)
{
	float s = 0;
	for (int j = 0; j < n; j++)
		s += a[d][j];
	return s;
}

/* Y nghia cua ham nay la tim tong theo dong lon nhat*/

float TongLonNhat(float a[][500], int m, int n)
{
	float lc = TongDong(a, m, n, 0);
	for (int i = 0; i < m; i++)
		if (TongDong(a, m, n, i) > lc)
			lc = TongDong(a, m, n, i);
	return lc;
}


void LietKe(float a[][500], int m, int n)
{
	float sln = TongLonNhat(a, m, n);
/* Cho nay co nghia: sln la tong max sau do duyet tung dong de tim tong
tung dong, neu ma trong dong do ma = tong max thi in chi so cua dong do ra*/
	for (int i = 0; i < m; i++)
		if (TongDong(a, m, n, i) == sln)
			cout << setw(8) << i;
}