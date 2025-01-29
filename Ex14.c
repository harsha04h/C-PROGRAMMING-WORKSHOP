#include<stdio.h>
int main()
{
	int radius;
	float Area, Circum;
	const float PI=3.14;
	printf("Enter radius of a Circle::");
	scanf("%d",&radius);
	Area= PI*radius*radius;
	Circum=2*PI*radius;
	printf("Area of circle of radius %d is %f\n",radius,Area);
	printf("Circumfrence of circle of radius %d is %f\n",radius,Circum);
	return 2;
}
