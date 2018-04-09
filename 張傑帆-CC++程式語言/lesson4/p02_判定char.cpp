# include<stdio.h>
# include<stdlib.h>

int main(void){

	char ch;
	scanf(" %c",&ch);
	
	
	if (ch>='0'&& ch<='9')
		printf("Num");
	else if (ch>='A' && ch<='Z')
		printf("Big");
	else if (ch>='a' && ch<='z'){

	
		printf("small");
		ch -= 32;
		printf("%c",ch);
	}
	
	else {
			printf("Other"); 
	}
	

	return 0;
}

