#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
void NguyenHoa(float[][500], int, int);
void Xuat(float[][500], int, int);

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << "Ma tran truoc khi nguyen hoa: \n";
	Xuat(b, m, n);
	cout << "\nMa tran sau khi nguyen hoa: \n";
	NguyenHoa(b, m, n);
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

void NguyenHoa(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0)
				a[i][j] = int(a[i][j] + 0.5);
			else
				a[i][j] = int(a[i][j] - 0.5);
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