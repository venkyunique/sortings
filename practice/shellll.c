#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,arr[n],j;
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	int gap;
	for(gap=n/2;gap>0;gap=gap/2)
	{
		for(j=gap;j<n;j++)
		{
			for(i=j-gap;i>=0;i=i-gap)
			{
				if(arr[i+gap]<arr[i])
				{
					int temp;
					temp=arr[i];
					arr[i]=arr[i+gap];
					arr[i+gap]=temp;
				}
				else
					break;
			}
			for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	printf("\n");
		}
	}
//	for(i=0;i<n;i++)
//	printf("%d\t",arr[i]);
}
