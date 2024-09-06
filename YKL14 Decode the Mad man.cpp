#include <cctype>
#include <iostream>
using namespace std;

int main()
{

	string str;
	string table = "`1234567890-=qwertyuiop[]]\\asdfghjkl;'zxcvbnm,./";

	while (getline(cin, str))
	{
		for (int i = 0; i < str.length(); i++)
		{
			str[i] = tolower(str[i]);
		}
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == ' ')
			{
				cout << " ";
			}
			else
			{
				cout << table[table.find(str[i]) - 2];
			}
		}
		cout << endl;
	}
}