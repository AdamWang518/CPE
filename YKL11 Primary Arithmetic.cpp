
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		if (a == 0 && b == 0)
		{
			break;
		}
		int count = 0;
		int carry = 0;
		while (a > 0 || b > 0)
		{
			int sum = a % 10 + b % 10 + carry;
			if (sum >= 10)
			{
				count++;
				carry = 1;
			}
			else
			{
				carry = 0;
			}
			a /= 10;
			b /= 10;
		}
		if (count == 0)
		{
			cout << "No carry operation." << endl;
		}
		else if (count == 1)
		{
			cout << count << " carry operation." << endl;
		}
		else
		{
			cout << count << " carry operations." << endl;
		}
	}
	return 0;
}