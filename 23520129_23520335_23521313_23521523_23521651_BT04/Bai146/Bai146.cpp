#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
int KtCot(float[][500], int, int, int);
void XoaCot(float[][500], int, int&, int);
void XoaCot(float[][500], int, int&);
void Xuat(float[][500], int, int);

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << "Ma tran truoc khi xoa: \n";
	Xuat(b, m, n);
	XoaCot(b, m, n);
	if (n > 0)
	{
		cout << "\nMa tra sau khi xoa: \n";
		Xuat(b, m, n);
	}
	else
		cout << "Ma sau khi xoa rong";
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

int KtCot(float a[][500], int m, int n, int c)
{
	int flag = 1;
	for (int i = 0; i < m; i++)
		if (a[i][c] > 0)
			flag = 0;
	return flag;
}

void XoaCot(float a[][500], int m, int& n)
{
	for (int j = 0; j < n; j++)
	{
		if (KtCot(a, m, n, j) == 1)
		{
			XoaCot(a, m, n, j);
			j = 0;
		}
	}
	if (n == 1)
	{
		if (KtCot(a, m, n, 0) == 1)
			n--;
	}
}

void XoaCot(float a[][500], int m, int& n, int c)
{
	if (n == 1)
		n--;
	else
	{
		for (int i = 0; i < m; i++)
			for (int j = c; j < n; j++)
				a[i][j] = a[i][j + 1];
		n--;
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
