# include<stdio.h>
# include<stdlib.h>
#include <math.h> 

int main(void){

	int original;
	scanf("%d",&original);
	printf("Original: %.2f\nAdjusted: %.2f(+%.0f)",(double)original,sqrt(original)*10,sqrt(original)*10-(double)original);

	return 0;
}

