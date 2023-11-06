#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
void Xuat_A(float[][500], int, int);
void ConDau(float[][500], int, int, int&, int&);
int KtCon(float[][500], int, int, int, int);

int main()
{
	float b[500][500];
	int m, n;
	int vtc = 0, vtd = 0;
	Nhap(b, m, n);
	cout << "Ma tran A: " << endl;
	Xuat_A(b, m, n);
	ConDau(b, m, n, vtd, vtc);
	cout << "Ma tran con toan duong dau tien trong ma tran" << endl;
	Xuat(b, vtd, vtc);
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

void Xuat_A(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

void Xuat(float a[][500], int vtd, int vtc)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << setw(8) << a[vtd + i][vtc + j];
		cout << endl;
	}
}

void ConDau(float a[][500], int m, int n, int& vtd, int& vtc)
{
	for (vtd = 0; vtd <= m - 3; vtd++)
		for (vtc = 0; vtc <= n - 3; vtc++)
			if (KtCon(a, m, n, vtd, vtc) == 1)
				return;
	vtd = vtc = -1;
}

int KtCon(float a[][500], int m, int n, int vtd, int vtc)
{
	int flag = 1;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (a[vtd + i][vtc + j] <= 0)
				flag = 0;
	return flag;
}
