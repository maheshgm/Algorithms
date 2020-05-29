/*
	Date: 24-05-2020
*/
#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> &A,int n){
	for(int i=1;i<n;i++){
		int j=i-1;
		int key=A[i];
		while(j>=0 && key<A[j]){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=key;
	}
}

int main()
{
	vector<int> A={5,2,4,6,1,3};
	insertionSort(A,6);
	for(int i:A){
		cout<<i<<" ";
	}
	cout<<endl;
}