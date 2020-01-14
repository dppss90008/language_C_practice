# include<stdio.h>
# include<stdlib.h>

int main(void){

	// caculate mean
	int num1,num2,num3;
	
	printf("input number1: ");
	scanf("%d",&num1); 
	printf("input number2: ");
	scanf("%d",&num2); 
	printf("input number3: ");
	scanf("%d",&num3); 
	
	int average = (num1 + num2 + num3)/3;
	printf("mean = %d\n",average);
	
	double average2 = (num1 + num2 + num3)/3;
	printf("mean = %f\n",average2);
	// 因為 num1 num2 num3 3 都是 int 存回去average2 
	
	double average3 = (num1 + num2 + num3)/3.;
	printf("mean = %f\n",average3);
	return 0;
}

