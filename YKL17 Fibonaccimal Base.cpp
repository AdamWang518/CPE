#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> fib;
	int index=2;
	fib.push_back(0);
	fib.push_back(1);
	while(fib.back()<=100000000){
		fib.push_back(fib[index-2]+fib[index-1]);
		index++;
	}
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int number;
		cin>>number;
		int tmp=number;
		string fibStr="";
		for(int a=fib.size()-1;a>=2;a--){
			if (tmp>=fib[a]&&(fibStr == "" || fibStr.back() != '1')){
                    fibStr = fibStr + "1";
                    tmp = tmp - fib[a];
           	}
           	else if (tmp<fib[a]&&fibStr == ""){
                
            }
           	else {
                fibStr = fibStr + "0";
            }
		}
		cout << number << " = " << fibStr << " (fib)" << endl;
	}
	return 0;
}