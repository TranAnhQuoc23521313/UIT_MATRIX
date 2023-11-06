#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
int DemCon(float[][500], int, int, float[][500], int, int);

int main()
{
	float b[500][500], c[500][500];
	int m, n, hang, cot;
	cout << setw(4) << "Nhap vao ma tran A: " << endl;
	Nhap(b, m, n);
	cout << "Ma tran A: " << endl;
	Xuat(b, m, n);
	cout << setw(4) << "Nhap vao ma tran B: " << endl;
	Nhap(c, hang, cot);
	cout << "Ma tran B: " << endl;
	Xuat(c, hang, cot);
	cout << "So lan xuat hien cua ma tran A trong ma tran B: " << DemCon(b, m, n, c, hang, cot);
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

int DemCon(float a[][500], int m, int n, float b[][500], int k, int l)
{
	if (m > k || n > l)
		return 0;
	int dem = 0;
	for (int d = 0; d <= k - m; d++)
		for (int c = 0; c <= l - n; c++)
		{
			int flag = 1;
			for (int i = 0; i < m; i++)
				for (int j = 0; j < n; j++)
					if (a[i][j] != b[d + i][c + j])
						flag = 0;
			if (flag == 1)
				dem++;
		}
	return dem;
}