#include<stdio.h>
int partition(int arr[],int low,int high);
void quicksort(int arr[],int low,int high);
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
	int ref=arr[low];
	int start=low+1,end=high;
	do{
		while(arr[start]<=ref)
		start++;
		while(arr[end]>ref)
		end--;
		if(start<end)
		{
			int temp;
			temp=arr[start];
			arr[start]=arr[end];
			arr[end]=temp;
		}
	}while(start<end);
	int p;
	p=arr[low];
	arr[low]=arr[end];
	arr[end]=p;
	return end;
}
