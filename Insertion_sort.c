#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	int j,k;
	for(i=1;i<n;i++)
	{
		j=i-1;
		k=arr[i];
		while(j>=0 && arr[j]>k)
		{
				arr[j+1]=arr[j];
				j--;
		}
		arr[j+1]=k;
	}
	int p;
		for(p=0;p<n;p++)
	printf("%d ",arr[p]);
}
