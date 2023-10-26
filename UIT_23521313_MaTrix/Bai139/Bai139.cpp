#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void HoanVi(float&, float&);
void TaoXoanOc(float[][500], int, int, float[]);
void SapXepXoanOc(float[][500], int, int, float[]);
void Xuat(float[][500], int, int);

int main()
{
    float temp[1000];
    float b[500][500];
    int m, n;
    Nhap(b, m, n);
    SapXepXoanOc(b, m, n, temp);
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

void HoanVi(float& a, float& b)
{
    float temp = a;
    a = b;
    b = temp;
}

void TaoXoanOc(float a[][500], int m, int n, float bc[])
{
    int temp = 0;
    int h1 = 0;
    int h2 = n - 1;
    int c1 = 0;
    int c2 = m - 1;
    while (h1 <= h2 && c1 <= c2)
    {
        for (int j = c1; j <= c2; j++)
            a[h1][j] = bc[temp++];
        h1++;
        for (int i = h1; i <= h2; i++)
            a[i][c2] = bc[temp++];
        c2--;
        if (c1 <= c2)
        {
            for (int j = c2; j >= c1; j--)
                a[h2][j] = bc[temp++];
            h2--;
        }
        if (h1 <= h2)
        {
            for (int i = h2; i >= h1; i--)
                a[i][c1] = bc[temp++];
            c1++;
        }
    }
}
void SapXepXoanOc(float a[][500], int m, int n, float b[])
{
    int k = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            b[k++] = a[i][j];
    //    cout << k << endl;
    for (int i = 0; i < k - 1; i++)
        for (int j = i + 1; j < k; j++)
            if (b[i] > b[j])
                HoanVi(b[i], b[j]);
    k = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = b[k++];
    TaoXoanOc(a, m, n, b);
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