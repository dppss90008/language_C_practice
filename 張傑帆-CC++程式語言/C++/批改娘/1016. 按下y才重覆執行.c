# include<stdio.h>
# include<stdlib.h>

int main(void){

	char a;
	scanf(" %c",&a);
	while(1){
		if(a=='y'){
			printf("run\n");
			scanf(" %c",&a);
			continue;
		}
		else break;
		
	}
	


	return 0;
}

