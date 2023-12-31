#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void Nhap(string, int[][500], int&, int&);
void Xuat(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	string FileName = "intdata01.inp";
	Nhap(FileName, a, m, n);
	Xuat(a, m, n);
	return 0;
}

void Nhap(string FileName, int a[][500], int& m, int& n)
{
	ifstream fi(FileName);
	fi >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			fi >> a[i][j];
}

void Xuat(int a[][500], int m, int n)
{
	cout << "Ma tran " << m << "*" << n << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}