# include<stdio.h>
# include<stdlib.h>

int main(void){

	double a,b;
	scanf("%lf%lf",&a,&b);
	printf("%.2lf + %.2lf = %.2lf\n",a,b,a+b);
	printf("%.2lf - %.2lf = %.2lf\n",a,b,a-b);
	printf("%.2lf * %.2lf = %.2lf\n",a,b,a*b);
	printf("%.2lf / %.2lf = %.2lf",a,b,a/b);

	return 0;
}

