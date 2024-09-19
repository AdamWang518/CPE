#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t, n;
	cin >> t;
	for (int test = 1; test <= t; test++)
	{
		cout << "Test #" << test << ": ";

		string skip;
		cin >> skip >> skip >> n;

		vector<vector<long long>> matrix(n, vector<long long>(n));

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> matrix[i][j];
			}
		}

		bool symmetric = true;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{

				if (matrix[i][j] != matrix[n - 1 - i][n - 1 - j] || matrix[i][j] < 0)
				{
					symmetric = false;
					break;
				}
			}
		}

		if (symmetric)
		{
			cout << "Symmetric." << endl;
		}
		else
		{
			cout << "Non-symmetric." << endl;
		}
	}

	return 0;
}
