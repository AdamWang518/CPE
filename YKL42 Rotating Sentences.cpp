#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<string> v;
    string temp;
    int max_length = 0;
    while (getline(cin, temp))
    {
        v.push_back(temp);
        if (max_length < temp.length())
        {
            max_length = temp.length();
        }
    }
    for (string &str : v)
    {
        str.resize(max_length, ' ');
    }
    for (int i = 0; i < max_length; i++)
    {
        //以col為單位，每次從row尾端輸出。
        for (int j = v.size() - 1; j >= 0; j--)
        {
            cout << v[j][i];
        }
        cout << endl;
    }
    return 0;
}