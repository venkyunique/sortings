#include<stdio.h>
void quicksort(int arr[],int low,int high);
int partition(int arr[],int low,int high);
int main()
{
	int n;
	scanf("%d",&n);
	int i,arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	quicksort(arr,0,n-1);
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
}
void quicksort(int arr[],int low,int high)
{
	int pivot;
	if(low<high)
	{
		pivot=partition(arr,low,high);
		quicksort(arr,low,pivot-1);
		quicksort(arr,pivot+1,high);
	}
}
int partition(int arr[],int low,int high)
{
	int temp;
	int i=low+1,j=high;
	int ref=arr[low];
	do{
		while(arr[i]<=ref)
		i++; 
		while(arr[j]>ref)
		j--;
		if(i<j)
		{
	        temp=arr[i];
	        arr[i]=arr[j];
	        arr[j]=temp;
	    }
	}while(i<j);
	temp=arr[low];
	arr[low]=arr[j];
	arr[j]=temp;
	return j;
}
