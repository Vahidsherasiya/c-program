#include<stdio.h>
int main()
{
	float a,b,c,ave;
	printf("enter first number:");
	scanf("%f",&a);
	printf("enter second number:");
	scanf("%f",&b);
	printf("enter third number:");
	scanf("%f",&c);
	ave=(a+b+c)/3;
	printf("average is:%f",ave);
	return 0;
}
