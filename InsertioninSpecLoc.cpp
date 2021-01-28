#include<stdio.h>
int main()
{
	int n, i, newpos, newele;
	scanf("%d",&n);//taking array size from user
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);//taking array elements from the user
	printf("Entered array:\n");
	for(i=0;i<n;i++)
		printf("%d %d-position\n",a[i],i+1); 
	printf("Enter the position to insert new element:");
	scanf("%d",&newpos);//taking the position from the user
	printf("Insert the new element to be put on the new location:");
	scanf("%d",&newele);//taking the element to be inserted in that new position
	n++;
	for (i = n-1; i >= newpos; i--)
        a[i] = a[i - 1];
	a[newpos-1]= newele;
	printf("Array after insertion of elements:\n");
	for(i=0;i<n;i++)
		printf("%d %d-position\n",a[i],i+1); 
}
