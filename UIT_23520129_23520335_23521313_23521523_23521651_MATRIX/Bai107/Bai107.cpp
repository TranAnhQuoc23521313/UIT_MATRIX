#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
int KtGiam(float[][500], int, int);

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << KtGiam(b, m, n);
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

int KtGiam(float a[][500], int m, int n)
{
	int flag = 1;
	for (int i = 0; i < m;i++)
		for (int j = 0; j < n; j++)
		{
//			cout << i << ":" << j;
			if (i >= 1 && j == 0)
			{
				if (a[i - 1][n - 1] < a[i][j])
					return 0;
//					cout << a[i - 1][n - 1] << " > " << a[i][j];
//					cout << i - 1 << ":" << n - 1 << " va " << i << ":" << j << endl;
			}
			if (j < n-1)
			{
				if (a[i][j] < a[i][j + 1])
					return 0;
//					cout << a[i][j] << " > " << a[i][j + 1];
//					cout << i << ":" << j  << " va " << i << ":" <<j+1 << endl;
			}
		}
	return 1;
}


/* Giai thich thuat toan:
TH1 ta xet cung hang: neu ma a[i][j+1] > a[i][j] tuc la co thang dang tang dan nen ta se loai
TH2 ta xet cuoi hang va dau hang: neu ma cuoi hang cua thang nay ma lon hon dau hang cua thang kia thi no cung sai nen ta se loai
neu nhu khong thuoc 2 truong hop tren thi tuc la no giam dan*/