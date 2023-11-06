#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
float TongCot(float[][500], int, int, int);
float TongLonNhat(float[][500], int, int);
void LietKe(float[][500], int, int);

int main()
{
    float a[500][500];
    int m, n;
    Nhap(a, m, n);
    LietKe(a, m, n);
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

float TongCot(float a[][500], int m, int n, int c)
{
    float s = 0;
    for (int j = 0; j < n; j++)
        s = s + a[j][c];
    return s;
}

float TongLonNhat(float a[][500], int m, int n)
{
    float lc = TongCot(a, m, n, 0);
    for (int i = 0; i < m; i++)
        if (TongCot(a, m, n, i) < lc)
            lc = TongCot(a, m, n, i);
    return lc;
}

void LietKe(float a[][500], int m, int n)
{
    float sln = TongLonNhat(a, m, n);
    for (int i = 0; i < m; i++)
        if (TongCot(a, m, n, i) == sln)
            cout << setw(8) << i;
}