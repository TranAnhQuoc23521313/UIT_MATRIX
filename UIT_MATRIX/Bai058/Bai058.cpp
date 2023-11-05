#include <iostream>

using namespace std;

void Nhap(int[][500], int&, int&);
bool KtDang2m(int);
int DemDang2m(int[][500], int, int);

int main()
{
	int b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << DemDang2m(b, m, n);
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

bool KtDang2m(int x)
{
	if (x < 1)
		return false;
	int temp = x;
	while (temp > 1)
	{
		if (temp % 2 != 0)
			return false;
		temp /= 2;
	}
	return true;
}

int DemDang2m(int a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtDang2m(a[i][j]))
				dem++;
	return dem;
}