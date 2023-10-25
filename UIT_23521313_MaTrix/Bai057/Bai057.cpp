#include <iostream>

using namespace std;

void Nhap(int a[][500], int&, int&);
int DemToanChan(int[][500], int, int);
bool KtToanChan(int);

int main()
{
	int b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << DemToanChan(b, m, n);
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

bool KtToanChan(int x)
{
	int temp = x;
	while (temp != 0)
	{
		if ((temp%10) % 2 != 0)
			return false;
		temp /= 10;
	}
	return true;
}

int DemToanChan(int a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m;i++)
		for (int j = 0; j < n;j++)
			if (KtToanChan(a[i][j]))
				dem++;
	return dem;
}