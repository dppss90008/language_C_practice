# include<stdio.h>
# include<stdlib.h>

int main(void){

	int integer1, integer2;
	printf("Please enter the first integer: ");
	scanf("%d",&integer1);
	printf("Please enter the second integer: ");
	scanf("%d",&integer2);

	// input some code here
	int temp = integer1;
	integer1 = integer2;
	integer2 = temp;

	printf("integer1: %d\n",integer1);
	printf("integer2: %d",integer2);
	
	return 0;
}

