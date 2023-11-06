#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(double[][500], int&, int&);
void Xuat(double[][500], int, int);

int main()
{
	double c[500][500];
	int m, n;
	Nhap(c, m, n);
	Xuat(c, m, n);
	return 0;
}

void Nhap(double a[][500], int& m, int& n)
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

void Xuat(double a[][500], int m, int n)
{
	cout << "Ma tran kich thuoc " << m << "*" << n << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
			cout << fixed << setprecision(2) << setw(8) << a[i][j];
		cout << endl;
	}

}