#include <iostream>
#include <vector>
using namespace std;
int findsquare(int r, int c, vector<vector<char>> &v, int m, int n)
{
    int size = 1;
    int isSame = true;
    char centerChar = v[r][c];
    int margin = 1;
    while (isSame)
    {
        if (r - margin < 0 || r + margin >= m || c - margin < 0 || c + margin >= n)
        {
            break;
        }
        for (int i = -margin; i <= margin; i++)
        {
            if (v[r - margin][c + i] != centerChar || v[r + margin][c + i] != centerChar)
            {
                isSame = false;
                break;
            }
            if (v[r + i][c - margin] != centerChar || v[r + i][c + margin] != centerChar)
            {
                isSame = false;
                break;
            }
        }
        if (isSame)
        {
            size = 2 * margin + 1; // 更新正方形邊長
            margin++;              // 擴展正方形邊界
        }
    }
    return size;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int m, n, q;
        cin >> m >> n >> q;
        cout << m << " " << n << " " << q << endl;
        vector<vector<char>> v(m, vector<char>(n));
        for (int a = 0; a < m; a++)
        {
            for (int b = 0; b < n; b++)
            {
                cin >> v[a][b];
            }
        }
        for (int a = 0; a < q; a++)
        {
            int r, c;
            cin >> r >> c;
            int result = findsquare(r, c, v, m, n);
            cout << result << endl;
        }
    }
    return 0;
}