#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int j;
    for (j=0;j<n;j++)
    {
        long long int a,b,c;
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a+b+c==0 || a+b-c==0 || a-b+c==0 || a-b-c==0 || b+c-a==0 || b-c-a==0 || c-b-a==0 || -a-b-c==0)
        {
            printf("YES\n");
        }
        else
        printf("NO\n");
    }
	return 0;
}


