/*
	Date       : 29-05-2020
	Complexity : O(sqrt(N))
*/
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
	if(n<2) return false;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}
//Driver
int main()
{
	int n;
	cin>>n;
	isPrime(n) ? cout<<"Prime\n" : cout<<"Not a prime\n";
}