#include <iostream>

using namespace std;

void Nhap(float[][500], int&, int&, int&);
int KtCotGiam(float[][500], int, int, int);

int main()
{
	float b[500][500];
	int m, n, c;
	Nhap(b, m, n, c);
	cout << KtCotGiam(b, m, n, c);
	return 0;
}

void Nhap(float a[][500], int& m, int& n,int& c)
{
	cout << "Nhap vao cot C: ";
	cin >> c;
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

int KtCotGiam(float a[][500], int m, int n, int c)
{
	int flag = 1; // = 1 Tuc la gia su ban dau cot da giam 
	for (int i = 0; i < m - 1; i++)
		if (a[i][c] < a[i + 1][c])
			flag = 0;
/* Cho if nay co nghia la neu nhu phan tu sau lon nhat phan tu truoc thi no tang dan
ma de hoi cot co giam khong nen no sai flag = 0*/
	return flag;
}