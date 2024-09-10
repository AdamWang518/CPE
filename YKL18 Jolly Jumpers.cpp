#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> v(n);
        vector<int> v_diff(n, 0); // check appear or not
        bool isJolly = true;
        for (int a = 0; a < n; a++)
        {
            cin >> v[a];
        }
        if (n == 1)
        {
            cout << "Jolly" << endl;
            continue;
        }
        for (int i = 1; i < n; i++)
        {
            int diff = abs(v[i] - v[i - 1]);
            if (diff < 1 || diff > n - 1 || v_diff[diff] != 0)
            {
                isJolly = false;
                break;
            }
            v_diff[diff] = 1;
        }

        if (isJolly)
        {
            for (int i = 1; i < n; i++)
            {
                if (v_diff[i] == 0)
                {
                    isJolly = false;
                    break;
                }
            }
        } // 加不加無所謂
        if (isJolly)
        {
            cout << "Jolly" << endl;
        }
        else
        {
            cout << "Not jolly" << endl;
        }
    }
    return 0;
}
