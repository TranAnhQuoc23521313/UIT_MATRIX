#include <iostream>
#include <iomanip>

using namespace std;

void NhapMaTrix(long[][500], int&, int&);
void XuatMaTrix(long[][500], int, int);

int main()
{
	long a[500][500];
	int m, n;
	NhapMaTrix(a, m, n);
	XuatMaTrix(a, m, n);
	return 0;
}

void NhapMaTrix(long a[][500], int& m, int& n)
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

void XuatMaTrix(long a[][500], int m, int n)
{
	cout << "Ma tran " << m << " * " << n << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(10) << a[i][j];
		}
		cout << endl;
	}
}