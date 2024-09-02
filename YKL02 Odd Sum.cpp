#include<iostream>
using namespace std;
int main(){
	int T;
	cin>>T;
	int a,b;
	for(int n=1;n<=T;n++){
		cin>>a>>b;
		int temp=0;
		for(int m=a;m<=b;m++){
			if(m%2==1){
				temp+=m;
			}
		}
		cout<<"Case "<<n<<": "<<temp<<endl;
	}
	return 0;
}