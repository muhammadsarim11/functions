#include<iostream>
using namespace std;
int factorial(int n){
	int fact = 1;
	for(int i = 1; i<=n; i++){	
	fact*=i;
	}
	return fact;
}

int binomial(int n,int r){
	int fact_n = factorial(n);
int fact_r = factorial(r);
int fact_rmn = factorial(n-r);
 int result =fact_n / (fact_r*fact_rmn);
 
 return result;
}


int main(){
	int n = 6;
	int r = 3;

cout<<binomial(n,r);

	return 0;
}