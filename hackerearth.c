#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,arr[2*n];
	for(i=0;i<2*n;i++)
		scanf("%d",&arr[i]);
	int num=n;
	int arrtime[num];
	int j;
	for(j=0,i=0;j<num,i<2*n;j++,i=i+2)
	{
		arrtime[j]=arr[i]+arr[i+1];
	}
	int min=arrtime[0];
	for(j=0;j<num;j++)
	{
		if(min>arrtime[j])
		min=arrtime[j];
	}
	printf("%d",min);
}
