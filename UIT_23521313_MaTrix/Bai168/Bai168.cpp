#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
int DemCon(float[][500], int, int);
int KtCon(float[][500], int, int, int, int);

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << "Ma tran A: " << endl;
	Xuat(b, m, n);
	cout << "So luong ma tran con 3x3 toan duong trong ma tran A:" << DemCon(b,m,n);
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

void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

int DemCon(float a[][500], int m, int n)
{
	int dem = 0;
	for (int vtd = 0; vtd <= m - 3; vtd++)
		for (int vtc = 0; vtc <= n - 3; vtc++)
			if (KtCon(a, m, n, vtd, vtc) == 1)
				dem++;
	return dem;
}

int KtCon(float a[][500], int m, int n, int vtd, int vtc)
{
	int flag = 1;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (a[vtd + i][vtc + i] <= 0)
				flag = 0;
	return flag;
}