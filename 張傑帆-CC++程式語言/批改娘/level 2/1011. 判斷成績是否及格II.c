# include<stdio.h>
# include<stdlib.h>

int main(void){

	int i,grade;
	scanf("%d%d",&i,&grade);
	if (i==1){
		if (grade >= 60) printf("pass");
		else printf("fail");	
	}
	if (i==2){
		if (grade >= 70) printf("pass");
		else printf("fail");	
	}
	

	return 0;
}

