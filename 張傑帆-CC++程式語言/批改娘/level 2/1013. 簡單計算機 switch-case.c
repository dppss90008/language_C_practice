# include<stdio.h>
# include<stdlib.h>

int main(void){

	double a,b;
	char key;
	double ans;
	scanf("%lf %lf %c",&a,&b,&key);
	
	switch(key){
		case '+':
			ans = a+b;
			printf("%.2lf %c %.2lf = %.2lf",a,key,b,ans);
			break;
		case '-':
			ans = a-b;
			printf("%.2lf %c %.2lf = %.2lf",a,key,b,ans);
			break;
		case '*':
			ans = a*b;
			printf("%.2lf %c %.2lf = %.2lf",a,key,b,ans);
			break;
		case '/':
			ans = a/b;
			printf("%.2lf %c %.2lf = %.2lf",a,key,b,ans);
			break;
		
		
	}


	return 0;
}

