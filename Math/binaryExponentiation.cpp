/*
	Date       : 29-05-2020
	Complexity : O(log(n))
	Note       : Use mod 1e9+7 to avoid integer overflow
*/
#include<bits/stdc++.h>
using namespace std;
int binaryExponentiation(int base,int power)
{
	int result=1;
	while(power>0){
		if(power&1)
			result*=base,power--;
		else
			base*=base,power/=2;
	}
	return result;
}
//Driver
int main()
{
	int base,power;
	cin>>base>>power;
	cout<<binaryExponentiation(base,power)<<endl;
}