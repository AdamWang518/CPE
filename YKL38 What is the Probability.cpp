#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	int s, n, i;
	double p;
	cin >> s;

	for (int j = 0; j < s; j++)
	{
		cin >> n >> p >> i;

		if (p == 0)
		{
			cout << fixed << setprecision(4) << 0.0000 << endl;
			continue;
		}

		double p_lose = 1.0 - p;
		double p_win_i = (pow(p_lose, i - 1) * p) / (1.0 - pow(p_lose, n));

		cout << fixed << setprecision(4) << p_win_i << endl;
	}

	return 0;
}
