#include<iostream>
using namespace std;
int main(){
	int i,j;
	while(cin>>i>>j){
		int temp_i=i,temp_j=j;
		if(i>j){
			temp_i=j;
			temp_j=i;
		}
		int n=temp_i;
		int Max_depth=0;
		for(int a=temp_i;a<=temp_j;a++)
		{
			n=a;
			int Temp_depth=1;
			while(n!=1){
				if(n%2==1){
					n=3*n+1;
					Temp_depth++;
				}else{
					n=n/2;
					Temp_depth++;				
				}
			}
			if(Temp_depth>Max_depth){
				Max_depth=Temp_depth;
			}
		}
		cout<<i<<" "<<j<<" "<<Max_depth<<endl;
	}
	return 0;
}