#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define PI acos(-1.0)  // 使用 acos(-1.0) 來取得更準確的 PI

int main() {
    double s, a;
    string unit;
    const double r = 6440.0;  // 地球半徑固定值
    
    while (cin >> s >> a >> unit) {
        if (unit == "min") a /= 60.0;  // 將分鐘轉換為度數
        if (a > 180.0) a = 360.0 - a;  // 如果角度大於180度，取對稱角度
        
        // 計算弧長
        double arc = 2.0 * PI * (r + s) * a / 360.0;
        
        // 計算弦長
        double chord = 2.0 * (r + s) * sin((a / 2.0) * PI / 180.0);
        
        // 輸出結果，使用固定的6位小數精度
        cout << fixed << setprecision(6) << arc << " " << chord << "\n";
    }
    
    return 0;
}
