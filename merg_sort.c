#include<stdio.h>
void merg(int arr[],int mid,int low,int high);
void mergsort(int arr[],int low,int high);
int main()
{
	int n;
	scanf("%d",&n);
	int i,arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	mergsort(arr,0,n-1);
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
}
void mergsort(int arr[],int low,int high)
{
	int mid;
	if(low<high)
	{
	mid=(low+high)/2;
	mergsort(arr,low,mid);
	mergsort(arr,mid+1,high);
	merg(arr,mid,low,high);
    }
}
void merg(int arr[],int mid,int low,int high)
{
	int i=low,j=mid+1,k=low;
	int b[20];
	while(i<=mid && j<=high)
	{
	if(arr[i]<arr[j])
	{
		b[k]=arr[i];
		i++;
		k++;
	}
	else if(arr[j]<arr[i])
	{
		b[k]=arr[j];
		j++;
		k++;
	}
    }
    while(j<=high)
    {
    	b[k]=arr[j];
    	j++;
    	k++;
	}
    while(i<=mid)
    {
    	b[k]=arr[i];
    	i++;
    	k++;
	}
	for(i=low;i<=high;i++)
	arr[i]=b[i];
}
