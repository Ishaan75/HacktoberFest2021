#include<iostream>
using namespace std;


void swap(int* x,int* y){
	int temp = *x;
	*x=*y;
	*y=temp;
}

int partition(int A[],int start,int end){
	int pivot = A[end];
	int pIndex = start;
	
	for(int i = start ;i<end;i++){
		
		if(A[i] <= pivot){
			swap(A[i],A[pIndex]);
			pIndex++;
		}
		
		
	}
	
	swap(A[pIndex],A[end]);
	
	return pIndex;
		
}
	
	


void QuickSort(int A[],int start,int end){
	
	if(start<end){
		int pIndex= partition(A,start,end);
		QuickSort(A,start,pIndex-1);
		QuickSort(A,pIndex+1,end);
	}
}




int main(){
	int m;
	cout<<"Enter size of the array"<<endl;
	cin>>m;
	int* A =  new int[m];
	for(int i = 0;i<m;i++){
		cout<<"enter the "<<i<<" element "<<"	";
		cin>>A[i];
	}

    QuickSort(A,0,m-1);

	for (int i = 0; i < m; i++)
	{
		cout<<A[i]<<endl;
	}
	
	
	
	
}
