# include<stdio.h>
# include<stdlib.h>

int main(void){

	int score,n;
	printf("(1)大學部(2)研究所");
	scanf("%d",&n);
	printf("請輸入您的分數:");
	scanf("%d",&score);
	
	if (score<60){
		printf("fail");
	}
	else if (score <70 && n==2){
		printf("fail");
	}
	else {
		printf("pass");
	}
	return 0;
}

