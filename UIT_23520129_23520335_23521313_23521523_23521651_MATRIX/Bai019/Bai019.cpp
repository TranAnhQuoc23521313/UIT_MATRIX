#include <iostream>
#include <iomanip>

void Nhap(int[][500], int&, int&, int&);
bool KtDoiXung(int);
void LietKe(int[][500], int, int, int);

using namespace std;

int main()
{
	int a[500][500];
	int m, n, c;
	Nhap(a, m, n, c);
	LietKe(a, m, n, c);
	return 0;
}

void Nhap(int a[][500], int& m, int& n,int& c)
{
	cout << "Nhap vao M: ";
	cin >> m;
	cout << "Nhap vao N: ";
	cin >> n;
	cout << "Nhap vao C: ";
	cin >> c;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap vao gia tri A[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

bool KtDoiXung(int x)
{
	int temp = x;
	int doixung = 0;	
	while (temp > 0)
	{
		doixung = doixung * 10 + (temp % 10);
		temp /= 10;
	}
	return (doixung == x);
}

void LietKe(int a[][500], int m, int n, int c)
{
	for (int i = 0;i < m;i++)
		if (KtDoiXung(a[i][c]))
			cout << setw(8) << a[i][c];
}