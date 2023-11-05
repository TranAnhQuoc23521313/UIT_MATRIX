#include <iostream>
using namespace std;

void Nhap(int[][500], int&, int&, int&);
int DemSoDauChan(int[][500], int, int, int);
bool ktSoDauChan(int);

int main()
{
	int b[500][500];
	int m, n, d;
	Nhap(b, m, n, d);
	cout << "So luong so co chu so dau chan tren mot cot trong ma tran: " << DemSoDauChan(b, m, n, d);
	return 0;
}

void Nhap(int a[][500], int& m, int& n, int& d)
{
	cout << "Nhap cot d: ";
	cin >> d;
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap gia tri A[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

bool ktSoDauChan(int a)
{
	int temp;
	while (a > 0)
	{
		temp = a % 10;
		a = a / 10;
	}
	if (temp % 2 == 0)
		return true;
	return false;
}

int DemSoDauChan(int a[][500], int m, int n, int d)
{
	int dem;
	dem = 0;
	for (int i = 0; i < m; i++)
		if (ktSoDauChan(abs(a[i][d])))
			dem++;
	return dem;
}