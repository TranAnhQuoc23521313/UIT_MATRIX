#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void Nhap(string,float [][500], int&, int&);
void Xuat(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	string FileName = "floatdata06.inp";
	Nhap(FileName, a, m, n);
	Xuat(a, m, n);
	return 0;
}

void Nhap(string FileName, float a[][500], int& m, int& n)
{
	ifstream fi(FileName);
	fi >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			fi >> a[i][j];
}

void Xuat(float a[][500], int m, int n)
{
	cout << "Ma tran " << m << "*" << n << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << fixed << setprecision(2) << setw(8) << a[i][j];
		cout << endl;
	}
}