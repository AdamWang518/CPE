#include <iostream>
#include <string>
using namespace std;
int NineAdd(string str)
{
    int sum = 0;
    for (char a : str)
    {
        sum += (a - '0');
    }
    return sum;
}
int main()
{
    string str;
    while (cin >> str)
    {
        if (str == "0")
        {
            break;
        }
        int degree = 1;
        bool isMul = true;
        string temp_str = str;
        while (1)
        {
            int sum = NineAdd(temp_str);
            if (sum >= 10)
            {
                temp_str = to_string(sum);
                degree++;
            }
            else if (sum == 9)
            {
                break;
            }
            else
            {
                isMul = false;
                break;
            }
        }
        if (isMul)
        {
            cout << str << " is a multiple of 9 and has 9-degree " << degree << "." << endl;
        }
        else
        {
            cout << str << " is not a multiple of 9." << endl;
        }
    }
    return 0;
}