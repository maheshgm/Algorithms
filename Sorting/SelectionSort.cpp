/*
	Date: 25-05-2020
*/
#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &A,int n)
{
	for(int i=0;i<n;i++){
		int min_index=i;
		for(int j=i+1;j<n;j++){
			if(A[j]<A[min_index]){
				min_index=j;
			}
		}
		swap(A[i],A[min_index]);
	}
}
int main()
{
	vector<int> A={3,4,6,1,2,1,9,3,4};
	selectionSort(A,A.size());
	for(int i:A){
		cout<<i<<" ";
	}
	cout<<endl;
}