#include<iostream>
#include<iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
float LonNhat(float[][500], int, int);
float NhoNhat(float[][500], int, int);
float LonNhi(float[][500], int, int, int);

int main()
{
    float a[500][500];
    int m, n;
    Nhap(a, m, n);
    cout << LonNhi(a, m, n, LonNhat(a, m, n));
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

float LonNhat(float a[][500], int m, int n)
{
    float max = a[0][0];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (max < a[i][j])
                max = a[i][j];
    return max;
}

float LonNhi(float a[][500], int m, int n, int d)
{
    float second_max = a[0][0] != d ? a[0][0] : a[0][1];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (d > a[i][j] && a[i][j] > second_max)
                second_max = a[i][j];
    return second_max;
}

float NhoNhat(float a[][500], int m, int n)
{
    float min = a[0][0];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (min > a[i][j])
                min = a[i][j];
    return min;
}