# include<stdio.h>
# include<stdlib.h>
# include<conio.h> //linux and MacOs �S�����禡�w �L�k�ϥ�getch() 

int main(void){
	double a,b,ans;
	char key;
	
	printf("Input two number :\n");
	scanf("%lf%lf",&a,&b);
	printf("press +,-,*,/:");
	key = getch();
	//scanf(" %c",&key);
	
	switch(key){
	case '+':
		ans = a+b;	
		break;
	case '-':
		ans = a-b;	
		break;
	case '*':
		ans = a*b;	
		break;
	case '/':
		ans = a/b;	
		break;
	default :
		printf("Undefined key\n");
		return 0;	
	}
	
	// Output:
	printf("%lf %c %lf = %lf",a,key,b,ans);
	
	return 0;
}

