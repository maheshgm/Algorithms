/*
	Date: 25-05-2020
*/
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &A, int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(A[j]>A[j+1]){
				swap(A[j],A[j+1]);
			}
		}
	}
}
int main()
{
	vector<int> A={1,3,8,9,2,2,5,6};
	bubbleSort(A,A.size());
	for(int i:A){
		cout<<i<<" ";
	}
	cout<<endl;
}