# include<stdio.h>
# include<stdlib.h>

int main(void){

	printf("Input char: ");
	
	char ch;
	scanf("%c",&ch);
	
	//  'a' = 97 'A' = 65
	//  a - 32 = 'A' 
	// 'A' + 32 = 'a'
	
	if( ch>=97 && ch<=123){
		ch = ch - 32;
	}
	else if ( ch>= 65 && ch<= 91){
		ch = ch + 32;
	}
	
	printf("Output: %c",ch);

	return 0;
}

