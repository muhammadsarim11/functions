#include<iostream>
using namespace std;
int sum(int n){
	int digitsum =0;
	while(n>0){
		int lastdigit =  n%10;
		n = n/10;
		digitsum = digitsum+lastdigit;
	}
		return digitsum;
	
	
}


int main(){
	
	cout<<"sum is:"<<sum(2356
	)<<endl;
return 0;
}