#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n, caseNum = 0;
	while (cin >> n)
	{
		vector<int> v, v_bi(20000, 0);
		caseNum++;
		for (int a = 0; a < n; a++)
		{
			int temp;
			cin >> temp;
			v.push_back(temp);
		}
		for (int a = 0; a < n; a++)
		{
			if (v[a] < 0)
			{
				cout << "Case #" << caseNum << ": It is not a B2-Sequence." << endl
					 << endl;
			}
		}
		bool isBi = true;
		for (int i = 0; i < n; i++)
		{
			for (int j = i; j < n; j++)
			{
				int tmp = v[i] + v[j];
				if (v_bi[tmp] == 1)
				{
					isBi = false;
					break;
				}
				else
				{
					v_bi[tmp] = 1;
				}
			}
		}
		if (isBi)
		{
			cout << "Case #" << caseNum << ": It is a B2-Sequence." << endl
				 << endl;
		}
		else
		{
			cout << "Case #" << caseNum << ": It is not a B2-Sequence." << endl
				 << endl;
		}
	}
	return 0;
}