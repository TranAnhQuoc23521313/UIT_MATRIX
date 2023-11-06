#include <iostream>
using namespace std;

void Nhap(int[][500], int&, int&);
int ViTriLonNhat(int[], int);
int TimChuSo(int[][500], int, int);

int main()
{
    int a[500][500];
    int n, m;
    Nhap(a, m, n);
    cout << TimChuSo(a, m, n);
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

int ViTriLonNhat(int a[], int n)
{
    int lc = 0;
    for (int i = 0; i <= n - 1; i++)
        if (a[i] > a[lc])
            lc = i;
    return lc;
}

int TimChuSo(int a[][500], int m, int n)
{
    int dem[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 0)
                dem[0]++;
            int t = abs(a[i][j]);
            while (t != 0)
            {
                int dv = t % 10;
                dem[dv]++;
                t = t / 10;
            }
        }
    return ViTriLonNhat(dem, 10);
}
