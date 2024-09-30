#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
map<char, vector<int>> m=
{
{'c',{2,3,4,7,8,9,10}},{'d',{2,3,4,7,8,9}},{'e',{2,3,4,7,8}},{'f',{2,3,4,7}},{'g',{2,3,4}},{'a',{2,3}},{'b',{2}},
{'C',{3}},{'D',{1,2,3,4,7,8,9}},{'E',{1,2,3,4,7,8}},{'F',{1,2,3,4,7}},{'G',{1,2,3,4}},{'A',{1,2,3}},{'B',{1,2}}
};
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string move;
		getline(cin,move);
		vector<int> fingerCount(11,0);
		vector<bool> fingerPress(11,false);
		for(char c:move){
			vector<int> v=m[c];
			for (int i = 1; i <= 10; ++i) {
                if (find(v.begin(), v.end(), i) == v.end()) {
                    fingerPress[i] = false;
                }
            }
			for(int finger:v){
				if(fingerPress[finger]==false){
					fingerPress[finger]=true;
					fingerCount[finger]++;
				}
				
			}
		}
		for(int i=1;i<fingerCount.size();i++){
			cout<<fingerCount[i];
			if(i<10){
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}