#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

void TaoMaTran(float [][500], int&, int&);
void Xuat(float[][500], int, int);
void Xuat(string, float[][500], int, int);

int main()
{
	float c[500][500];
	int m, n;
	TaoMaTran(c, m, n);
	Xuat(c, m, n);
	string FileName = "data06.inp";
	Xuat(FileName, c, m, n);
	return 0;
}

void TaoMaTran(float a[][500], int& m, int& n)
{
	cout << "Nhap vao M: ";
	cin >> m;
	cout << "Nhap vao N: ";
	cin >> n;
	srand(time(NULL));
	for (int i=0;i < m;i++)
		for (int j = 0; j < n; j++)
		{
			a[i][j] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
		}
}

void Xuat(float a[][500], int m, int n)
{
	cout << "Ma tran ngau nhien cac so nguyen: \n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
			cout << setw(8) << setprecision(3)	<< a[i][j];
		cout << endl;
	}
}

void Xuat(string Filename, float a[][500], int m, int n)
{
	ofstream fo(Filename);
	fo << setw(8) << m << " * " << n << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			fo << setw(8) << a[i][j];
		fo << endl;
	}

}