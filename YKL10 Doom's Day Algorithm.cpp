#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 星期對應的名稱
string daysOfWeek[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

// Doomsday 日期（2011 年非閏年）
int doomsdays[] = {10, 21, 7, 4, 9, 6, 11, 8, 5, 10, 7, 12};
// 1/10,2/21,4/4,5/9/6/6,7/11,8/8,9/5,10/10,11/7,12/12
//  計算日期對應的星期幾
string getDayOfWeek(int month, int day)
{
    // 找到該月份的 Doomsday
    int doomsday = doomsdays[month - 1];
    // 計算日期與該月份 Doomsday 的天數差
    int difference = day - doomsday;
    // Doomsday 是星期一，所以從星期一開始計算
    int dayOfWeek = (0 + difference % 7 + 7) % 7; // 保證結果在 [0, 6] 範圍內，，處理負數
    return daysOfWeek[dayOfWeek];
}

int main()
{
    int t;
    cin >> t; // 測試用例數量
    while (t--)
    {
        int month, day;
        cin >> month >> day;
        cout << getDayOfWeek(month, day) << endl;
    }
    return 0;
}
