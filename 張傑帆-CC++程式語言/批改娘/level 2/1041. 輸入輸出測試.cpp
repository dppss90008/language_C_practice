# include<stdio.h>
# include<stdlib.h>

int main(void){

	char a[80];
	char b[80];
	char c[80];
	
	gets(a);
	gets(b);
	gets(c);
	
	printf("%s\n",a);
	printf("%s\n",b);
	printf("%s",c);
	return 0;
}

