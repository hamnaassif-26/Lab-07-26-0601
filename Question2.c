#include <stdio.h>
int main()
{
	float Student[10];
	int i=0;
	
	
	for(i=0;i<10;i++)
	{	printf("Enter Marks of Student %d : ",i+1);
		scanf("%f",&Student[i]);
	}
	
	for(i=0;i<10;i++)
	{
		printf("Student %d --> Marks:%.1f\n",i+1,Student[i]);
	}
	
	
	
	
}
