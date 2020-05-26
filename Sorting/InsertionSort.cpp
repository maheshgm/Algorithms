/*
	Date: 24-05-2020
*/
#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> &A,int n){
	for(int i=0;i<n-1;i++){
		if(A[i]>A[i+1]){
			int j=i;
			int key=A[i+1];
			while(j>0 && A[j]>key){
				A[j-1]=A[j];
				j--;
			}
			for(int k:A){
				cout<<k<<" ";
			}
			cout<<endl;
			A[j]=key;
		}
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