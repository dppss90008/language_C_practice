# include<stdio.h>
# include<stdlib.h>

int main(void){

	int a,b,c,Sum,Max,Min,Pro;
	double Avg;
	scanf("%d%d%d",&a,&b,&c);
	Sum = a+b+c;
	Avg = (double)Sum/3;\
	Pro = a*b*c;
	Max = a;
	Min = a;
	if (b>Max) Max=b;
	if (c>Max) Max=c;
	if (b<Min) Min=b;
	if (c<Min) Min=c;
	
	printf("sum is %d\naverage is %.2lf\nproduct is %d\nsmallest is %d\nlargest is %d",Sum,Avg,Pro,Min,Max);


	return 0;
}

