#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string a, b;
    while (getline(cin, a) && getline(cin, b)) {
    	if(a=="\n"&&b=="\n"){
    		cout<< endl<<endl;
    		continue;
    	}
        int freqA[26] = {0}, freqB[26] = {0};
        for (char c : a) {
            freqA[c - 'a']++;
        }
        for (char c : b) {
            freqB[c - 'a']++;
        }
        string result = "";
        for (int i = 0; i < 26; ++i) {
            int commonCount = min(freqA[i], freqB[i]);
            result += string(commonCount, 'a' + i);
        }
        cout << result << endl;
    }
    
    return 0;
}
