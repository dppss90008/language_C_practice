# include<stdio.h>
# include<stdlib.h>

int main(void){

	char str1[80];
	char a[80];
	scanf("%s",str1); 	//不能輸入空白 
    fflush(stdin);
	
	gets(a);
	puts(str1);
	
	puts(a);

	return 0;
}

