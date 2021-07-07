//sum=1+1/2+1/4+1/8........1/2^n(input n)
#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	float sum;
	printf("\nEnter the value of n:");
	scanf("%d",&n);
	printf("\n\t***USING FOR LOOP***\n");
	sum=0;
	for(i=0;i<=n;i++)
	{
		sum=sum+(1/(pow(2,i)));
	}
	printf("\nThe result is:%.2f\n",sum);
	printf("\n\t***USING WHILE LOOP***\n");
	sum=0;
	i=0;
	while(i<=n)
	{
		sum=sum+(1/(pow(2,i)));
		i++;
	}
	printf("\nThe result is:%.2f\n",sum);
	printf("\n\t***USING WHILE LOOP***\n");
	sum=0;
	i=0;
	do
	{
		sum=sum+(1/(pow(2,i)));
		i++;
	}while(i<=n);
	printf("\nThe result is:%.2f\n",sum);
	return(0);
}
