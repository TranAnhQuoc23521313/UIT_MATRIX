#include <iostream>

using namespace std;

int DemNguyenTo(int a[][500], int m, int n, int c);

int main() 
{
    int m, n;
    cin >> m >> n;
    int a[m][500];
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cin >> a[i][j];
        }
    }
    int c;
    cin >> c;
    int count = DemNguyenTo(a, m, n, c);
    cout << count << endl;
    return 0;
}

int DemNguyenTo(int a[][500], int m, int n, int c) 
{
    int count = 0;
    for (int i = 0; i < m; i++) 
    {
        if (a[i][c] > 1 && a[i][c] % 2 != 0) 
        {
            for (int j = 3; j * j <= a[i][c]; j++) 
            {
                if (a[i][c] % j == 0) 
                {
                    break;
                }
            }
            if (j * j > a[i][c]) 
            {
                count++;
            }
        }
    }
    return count;
}