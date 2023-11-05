#include <iostream>

using namespace std;

void Nhap(float[][500], int&, int&);
int DemPhanBiet(float[][500], int, int);

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << DemPhanBiet(b, m, n);
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

int DemPhanBiet(float a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			bool flag = true;
//			cout << a[i][j] << setw(4) << i << ":" << j << endl;
			for (int i1 = 0; i1 <= i; i1++)
			{
				int j_condition;
				if (i1 < i)
					j_condition = n;
				if (i1 == i)
					j_condition = j;
				for (int j1 = 0; j1 < j_condition; j1++)
				{
					if (a[i][j] == a[i1][j1])
						flag = false;
				}
			}
			if (flag)
				dem++;
		}
	return dem;
}