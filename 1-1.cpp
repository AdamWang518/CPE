#include <iostream>
using namespace std;
int main()
{
    int i, j;
    while (cin >> i >> j)
    {
        if (i > j)
        {
            int temp = i;
            i = j;
            j = temp;
        }
        int max = 0;
        for (int a = i; a <= j; a++)
        {
            int b = a;
            int length = 1;
            bool isBreak = 0;
            while (isBreak != 1)
            {
                if (b == 1)
                {
                    isBreak = 1;
                }
                else if (b % 2 != 0)
                {
                    b = 3 * b + 1;
                    length++;
                }
                else if (b % 2 == 0)
                {
                    b = (int)b / 2;
                    length++;
                }
            }
            if (length > max)
            {
                max = length;
            }
        }
        cout << i << " " << j << " " << max << endl;
    }
    return 0;
}