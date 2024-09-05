#include<iostream>
#include<string>
#include<bitset>
using namespace std;
int countOnesInBinary(int num) {
    int count = 0;
    while (num > 0) {
        count += num & 1; 
        num >>= 1;        
    }
    return count;
}
int main(){
	int n;
	while(cin>>n){
		if(n==0){
			break;		
		}
		string binary = bitset<32>(n).to_string();
        binary = binary.substr(binary.find('1'));
		int count=countOnesInBinary(n);
		cout<<"The parity of "<<binary<<" is "<<count<<" (mod 2)."<<endl;
	}
	return 0;
}