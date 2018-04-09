# include<stdio.h>
# include<stdlib.h>

int main(void){

	int i = 10; // 4 bite
	int k;     // 4 bite
	// «Å§i«¬ºA 
	int *ptr; // 8 byte
//	int *ptr= (int*)10;
	ptr = &i;
	*ptr = 99;
	k = *ptr;
	
	printf("Name\taddress\tvalue\n");
	printf("=========================================\n");
	printf("i\t%d\t%d\n",&i,i);
	printf("k\t%d\t%d\n",&k,k);
	printf("ptr\t%d\t%d\n",&ptr,ptr);
	printf("*ptr\t%d\t%d\n",&*ptr,*ptr);
	
	return 0;
}

