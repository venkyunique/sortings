#include<stdio.h>
#include<stdlib.h>
insertion_sort(int a[],int n){
int i,j,temp;
for(i=1;i<n;i++){
temp=a[i];
for(j=i-1;j>=0;j--){
if(a[j]>temp){
a[j+1]=a[j];
}
else{
a[j+1]=temp;
break;
}
}
a[j+1]=temp;
}
}
int main(){
int i,j,k,t,n,*a;
scanf("%d",&t);
for(i=0;i<t;i++){
scanf("%d",&n);
a=(int *)malloc(sizeof(int)*n);
for(j=0;j<n;j++){
scanf("%d",&a[j]);
}
insertion_sort(a,n);
for(k=0;k<n;k++){
printf("%d ",a[k]);
}
printf("\n");
}
}
