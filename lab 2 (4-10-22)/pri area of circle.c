#include<stdio.h>
#define PI 3.14
int main()
{
	float r,area;
	printf("enter radius:");
	scanf("%f",&r);
	area=PI*r*r;
	printf("area of circle is:%f",area);
	return 0;
}
