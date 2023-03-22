#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=1;i<n;i++)
	{
		int k=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>k)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=k;
	}
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
}
