#include <iostream>

using namespace std;

void Nhap(int a[][500], int&, int&);
int ChanDau(int[][500], int, int);

int main()
{
	int b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << ChanDau(b, m, n);
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
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

int ChanDau(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				return a[i][j]; // Cho nay nghia la tim duoc gia tri thoa dieu kien thi dung luon khong lam nua
	return -1; // Sau khi het for ma khong tim thay thi tuc la khong co nen tra ve -1.
}