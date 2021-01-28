#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];/*initialising array from the input given by the user, if you don't want to take user defined array, then you can always
	use any whole number instead of n, like a[5] or a[10]**/
	for(i=0;i<n;i++)//a for loop to take the array elements
		scanf("%d",&a[i]);
	printf("The entered elements include:\n");
	for(i=0;i<n;i++)//a for loop for printing the array elements
		printf("%d\n",a[i]);
}
