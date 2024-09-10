#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

double pi = acos(-1.0); // 定義 pi 值

int main()
{
    const int r = 6440; // 地球半徑
    int s, a;
    string type;

    while (cin >> s >> a >> type)
    {
        double arc, chord, degree, distance;

        // 如果輸入是 "min"，則將角度轉換為度數
        if (type == "min")
        {
            degree = a / 60.0; // 60 分鐘 = 1 度
        }
        else
        {
            degree = a;
        }

        distance = s + r; // 圓的半徑加上距離 s

        // 計算弧長，2 * pi * r * (degree / 360)，這裡應該用原角度
        arc = 2.0 * pi * distance * degree / 360.0;

        // 計算弦長，使用弧度計算，sin(angle_in_radians)，這裡對弦長使用處理大於180度的情況
        if (degree > 180.0)
        {
            degree = 360.0 - degree;
        }
        chord = 2.0 * distance * sin((degree / 2.0) * pi / 180.0);

        // 輸出結果，保留6位小數
        cout << fixed << setprecision(6) << arc << " " << chord << "\n";
    }
}
