# include<stdio.h>
# include<stdlib.h>
# include<string.h>

int main(void){

	char a[80] = "Hello world";
	char b[80] = "HEllo world";
	
	// Compare Two String function
	if (strcmp(a,b)==0)
		printf("Same");
	else if (strcmp(a,b)>0)
		printf("a big");
	else
		printf("b big");
	
	// string copy
	char d[80];
	char e[80] = "Test string";
	strcpy(d,e);
	puts("");
	puts(d);
	
	// string connection
	char str1[80] = "Hello";
	char str2[80] = "World";
	strcat(str1,str2);
	puts(str1);
	
	//strcpy(str2,"I Love C/C++");
	memcpy(str2,"I Love C/C++",sizeof(char)*13);
	puts(str2);
	
	// Cacluate string length
	printf("%d",strlen(a));


	return 0;
}

