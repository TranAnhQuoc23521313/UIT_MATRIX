#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);  // Ham nay phai co
void BienDoi(float[][500], int, int); // Cho nay khai bao them may ham ma de bai yeu cau
void Xuat(float[][500], int, int); // Ham nay phai co

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << "Ma tran ban dau: \n";
	Xuat(b, m, n);
	cout << "\nMa tran sau khi bien doi: \n"; //Hoac la ma tran sau khi xoay 90 do hya 270 do tuy thuoc de bai
	BienDoi(b, m, n); // Ham main chi goi cai ham co ten giong trong de bai khong goi ham khac
	Xuat(b, m, n);
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

void BienDoi(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] < 0)
				a[i][j] = -1 * a[i][j];
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