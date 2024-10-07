// 使用Java的考生請注意，最外層的類別(class)需命名為 main 。
// 如果遇到超乎想像的狀況，請更改編譯器試看看!! 各編譯器特性不同!!
// 預設測資、隨機測資、固定測資是用來幫助除錯用的。批改時，只看暗中測資是否通過!!
#include <algorithm>
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    string str, reverse_str;
    map<char, char> m = {
        {'A', 'A'}, {'E', '3'}, {'H', 'H'}, {'I', 'I'}, {'J', 'L'}, {'L', 'J'}, {'M', 'M'}, {'O', 'O'}, {'S', '2'}, {'T', 'T'}, {'U', 'U'}, {'V', 'V'}, {'W', 'W'}, {'X', 'X'}, {'Y', 'Y'}, {'Z', '5'}, {'1', '1'}, {'2', 'S'}, {'3', 'E'}, {'5', 'Z'}, {'8', '8'}};
    while (getline(cin, str))
    {
        cout << str << " ";
        reverse_str = str;
        string mirror_str = str;
        reverse(reverse_str.begin(), reverse_str.end());
        reverse(mirror_str.begin(), mirror_str.end());
        bool isPalindrome = false;
        bool isMirrored = false;
        if (str == reverse_str)
        {
            isPalindrome = true;
        }
        for (char &c : mirror_str)
        {
            if (m.find(c) == m.end())
            {
                isMirrored = false;
                break;
            }
            else
            {
                c = m[c];
            }
        }
        if (str == mirror_str)
        {
            isMirrored = true;
        }
        if (isPalindrome == true && isMirrored == true)
        {
            cout << "-- is a mirrored palindrome." << endl
                 << endl;
        }
        else if (isPalindrome == true && isMirrored == false)
        {
            cout << "-- is a regular palindrome." << endl
                 << endl;
        }
        else if (isPalindrome == false && isMirrored == true)
        {
            cout << "-- is a mirrored string." << endl
                 << endl;
        }
        else if (isPalindrome == false && isMirrored == false)
        {
            cout << "-- is not a palindrome." << endl
                 << endl;
        }
    }
    return 0;
}