#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k;
    for(k=0;k<=n;k++)
    {
        int h,x,y;
        scanf("%d%d%d",&h,&x,&y);
        if(x<y && h>x)
        {
            printf("0\n");
            break;
        }
        else
        printf("1\n");
    }
}
