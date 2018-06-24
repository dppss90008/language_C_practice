# include<stdio.h>
# include<stdlib.h>

int main(void){

	char ch;
	while(scanf(" %c",&ch)!=EOF){
		if(ch=='q') {
			printf("%c\n",ch);
			break;	
		}
		else {
			printf("%c\n",ch);
			continue;
		}
		
	}



	return 0;
}

