#include <iostream>
using namespace std;
int main()
{
	int coke, coke_empty;
	while (cin >> coke)
	{
		int total = coke;
		coke_empty = coke;
		while (coke_empty >= 3)
		{
			coke = int(coke_empty / 3);
			coke_empty = coke + int(coke_empty % 3);
			total += coke;
		}
		if (coke_empty == 2)
		{
			total += 1;
		}
		cout << total << endl;
	}
	return 0;
}