# include<stdio.h>
# include<stdlib.h>

int main(void){

	char ch1,ch2;
/*	ch1 = getchar();
	ch2 = getchar();
	ch2 = getchar(); */
	//scanf("%c",&ch1);
	//scanf(" %c",&ch2);


	int i = 0;
	for(i=0;i<256;i++){
		printf("%3d : %c\n",i,i);
	}

	return 0;
}

