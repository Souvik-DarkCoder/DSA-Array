#include<stdio.h>
int main()
{
	int n,i,delpos;
	printf("Enter the range of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the position you want to delete:");
	scanf("%d",&delpos);
	n--;
	for(i=0;i<n;i++)
	{
		if(i>=delpos-1)
		a[i]=a[i+1];
	}
	printf("Array after deletion:\n");
	for(i=0;i<n;i++)
		printf("%d %dst position\n",a[i],i+1);
}
