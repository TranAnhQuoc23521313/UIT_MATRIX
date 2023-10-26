#include<iostream>
#include<iomanip>

using namespace std;

void Nhap(int[][500], int&, int&);
int DemChuSo(int);
int DemCot(int[][500], int, int, int);
int DemLonNhat(int[][500], int, int);
void LietKe(int[][500], int, int);

int main()
{
    int a[500][500];
    int m, n;
    Nhap(a, m, n);
    LietKe(a, m, n);
    return 0;
}

void Nhap(int a[][500], int& m, int& n)
{
    cout << "Nhap m: ";
    cin >> m;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
}

int DemChuSo(int n)
{
    int dem = 0;
    while (n)
    {
        dem++;
        n /= 10;
    }
    return dem;
}

int DemCot(int a[][500], int m, int n, int c)
{
    int dem = 0;
    for (int j = 0; j < m; j++)
        dem += DemChuSo(a[j][c]);
    return dem;
}

int DemLonNhat(int a[][500], int m, int n)
{
    int lc = DemCot(a, m, n, 0);
    for (int i = 0; i < n; i++)
        if (DemCot(a, m, n, i) > lc)
            lc = DemCot(a, m, n, i);
    return lc;
}

void LietKe(int a[][500], int m, int n)
{
    float cln = DemLonNhat(a, m, n);
    for (int i = 0; i < n; i++)
        if (DemCot(a, m, n, i) == cln)
            cout << setw(8) << i;
}
