#include <algorithm>
#include <bitset>
#include <iostream>
#include <string>
using namespace std;

// 歐幾里得算法求 GCD
long long GCD(long long a, long long b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return GCD(b, a % b);
    }
    return a;
}

int main()
{
    int t;
    cin >> t;
    for (int case_num = 1; case_num <= t; ++case_num)
    {
        string s1, s2;
        cin >> s1 >> s2;

        long long num1 = stoll(s1, nullptr, 2);  // 使用 stoll 來處理大數
        long long num2 = stoll(s2, nullptr, 2);

        long long result = GCD(num1, num2);

        if (result > 1)
        {
            cout << "Pair #" << case_num << ": All you need is love!" << endl;
        }
        else
        {
            cout << "Pair #" << case_num << ": Love is not all you need!" << endl;
        }
    }
    return 0;
}
