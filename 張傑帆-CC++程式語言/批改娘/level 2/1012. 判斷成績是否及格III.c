# include<stdio.h>
# include<stdlib.h>

int main(void){

	int i,grade;
	scanf("%d",&i);
	if (i!=1 && i!=2) printf("roll error");
	else{
		scanf("%d",&grade);
		if(grade>100||grade<0) printf("score error");
		else if(i==1){
			if(grade>=60) printf("pass");
			else printf("fail");
		}
		else{
			if(grade>=70) printf("pass");
			else printf("fail");
		}
		
		
	}
	

	return 0;
}

