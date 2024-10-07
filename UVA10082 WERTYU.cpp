#include <iostream>
#include <string>
using namespace std;
int main()
{
    string table = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;\'ZXCVBNM,./";
    string input;
    while (getline(cin, input))
    {

        for (int i = 0; i < input.length(); i++)
        {
            if (input[i] == ' ')
            {
                cout << " ";
            }
            else
            {
                cout << table[table.find(input[i]) - 1];
            }
        }
        cout << endl;
    }
    return 0;
}