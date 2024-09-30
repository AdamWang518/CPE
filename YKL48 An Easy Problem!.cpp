#include <algorithm> // 用于 max 函数
#include <iostream>
#include <string>
using namespace std;

int charToValue(char c)
{
	if (c >= '0' && c <= '9')
		return c - '0';
	if (c >= 'A' && c <= 'Z')
		return c - 'A' + 10;
	if (c >= 'a' && c <= 'z')
		return c - 'a' + 36;
	return -1; // 对无效字符的安全处理
}

int main()
{
	string x;
	while (cin >> x)
	{
		int sum = 0, maxVal = -1;
		bool isNegative = false;

		// 检查是否是负数
		if (x[0] == '-')
		{
			isNegative = true;
			x = x.substr(1); // 去掉负号
		}
		else if (x[0] == '+')
		{
			x = x.substr(1); // 去掉正号
		}

		for (char c : x)
		{
			int val = charToValue(c);
			if (val == -1)
				continue; // 跳过无效字符
			sum += val;
			maxVal = max(maxVal, val); // 更新最大字符数值
		}

		// 如果所有字符的总值为0，那么任何基数都可以
		if (sum == 0)
		{
			cout << "2" << endl;
			continue;
		}

		// 基数至少应该是 maxVal + 1
		int base = maxVal + 1;
		bool found = false;

		// 检查从 base 到 62 的基数
		for (int i = base; i <= 62; i++)
		{
			if (sum % (i - 1) == 0)
			{ // 找到符合条件的基数
				cout << i << endl;
				found = true;
				break;
			}
		}

		if (!found)
		{
			cout << "such number is impossible!" << endl;
		}
	}
	return 0;
}
