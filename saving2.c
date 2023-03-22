#include <stdio.h>

int main() {
    int n,j;
    scanf("%d",&n);
    double ans[n];
    for(j=0;j<n;j++)
    {
    int p,x,y,z;
    scanf("%d%d%d%d",&p,&x,&y,&z);
    if(z==1)
    {
        ans[j]=(double)y/100;
        ans[j]=p*ans[j];
        ans[j]=ans[j]+p;
    }
    else
    {
        ans[j]=(double)x/100;
        ans[j]=p*ans[j];
        ans[j]=p-ans[j];
    }
	}
	for(j=0;j<n;j++)
	printf("%.10lf\n",ans[j]);
}


