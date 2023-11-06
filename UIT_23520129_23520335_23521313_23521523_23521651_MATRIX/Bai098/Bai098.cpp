#include <iostream>
using namespace std;

void Nhap(float[][500], int&, int&);
float LonNhatDong(float[][500], int, int, int);
float LonNhatCot(float[][500], int, int, int);
float LonNhatCheo1(float[][500], int, int, int, int);
float LonNhatCheo2(float[][500], int, int, int, int);
int ktHoangHau(float[][500], int, int, int, int);
int DemHoangHau(float[][500], int, int);

int main()
{
    float a[500][500];
    int n, m;
    Nhap(a, m, n);
    cout << DemHoangHau(a, m, n);
    return 0;
}

void Nhap(float a[][500], int& m, int& n)
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

float LonNhatDong(float a[][500], int m, int n, int d)
{
    float lc = a[d][0];
    for (int j = 0; j < n; j++)
        if (a[d][j] > lc)
            lc = a[d][j];
    return lc;
}

float LonNhatCot(float a[][500], int m, int n, int c)
{
    float lc = a[0][c];
    for (int i = 0; i < m; i++)
        if (a[i][c] > lc)
            lc = a[i][c];
    return lc;
}

float LonNhatCheo1(float a[][500], int m, int n, int d, int c)
{
    float lc = a[d][c];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if ((i - j == d - c) && a[i][j] > lc)
                lc = a[i][j];
    return lc;
}

float LonNhatCheo2(float a[][500], int m, int n, int d, int c)
{
    float lc = a[d][c];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if ((i + j == d + c) && a[i][j] > lc)
                lc = a[i][j];
    return lc;
}

int ktHoangHau(float a[][500], int m, int n, int d, int c)
{
    float lnd = LonNhatDong(a, m, n, d);
    float lnc = LonNhatCot(a, m, n, c);
    float lnc1 = LonNhatCheo1(a, m, n, d, c);
    float lnc2 = LonNhatCheo2(a, m, n, d, c);
    if (a[d][c] == lnd && a[d][c] == lnc &&
        a[d][c] == lnc1 && a[d][c] == lnc2)
        return 1;
    return 0;
}

int DemHoangHau(float a[][500], int m, int n)
{
    int dem = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (ktHoangHau(a, m, n, i, j) == 1)
                dem++;
    return dem;
}
