#include <stdio.h>
int main()
{
	int i,temp[7]={31,33,35,34,38,36,32};
	int j,day[7]={1,2,3,4,5,6,7};
	int size,sum=0,max,min;
	float avg;

	
	
	size = sizeof(temp)/sizeof(temp[0]);
	printf("size = %zu\n",sizeof(size));
	
	for(i=0;i<7;i++)
	{
		printf("Day %d: %d C ",i+1,temp[i]);
		printf("\n");
	}
	
	max=temp[0];
	for(i=1;i<7;i++)
	{
		if(temp[i]>max)
		{
			max = temp[i];
		}
	}
	printf("Highest Temparature Record: %d\n",max);
	
	min=temp[0];
	for(i=1;i<7;i++)
	{
		if(temp[i]<min)
		{
			min = temp[i];
		}
	}
	printf("Lowest Temparature Record: %d\n",min);
	
	for(i=1;i<7;i++)
	{
		sum+=temp[i];
	}
	printf("Sum of Temparatures: %d\n",sum);
	
	for(i=1;i<7;i++)
	{
		avg = sum/7;
	}
	printf("Average = %.2f\n",avg);
	
	temp[2]=80;
	for(i=0;i<7;i++)
	{
		printf("Day %d: %d C ",i+1,temp[i]);
		printf("\n");
	}
	
	max=temp[0];
	for(i=1;i<7;i++)
	{
		if(temp[i]>max)
		{
			max = temp[i];
		}
	}
	printf("Highest Temparature Record: %d\n",max);
	
	min=temp[0];
	for(i=1;i<7;i++)
	{
		if(temp[i]<min)
		{
			min = temp[i];
		}
	}
	printf("Lowest Temparature Record: %d\n",min);
	
	for(i=1;i<7;i++)
	{
		avg = sum/7;
	}
	printf("Average = %.2f\n",avg);
	
	for(i=1;i<7;i++)
	{
		printf("Address of %d\n",&temp[i]);
	}

	return 0;
}
