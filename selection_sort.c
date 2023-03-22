#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,arr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n-1;i++)
	{
		int min=i;
		int j;
		for(j=i+1;j<n;j++)
		{
			if(arr[min]>arr[j])
			min=j;
		}
		int temp;
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
}
