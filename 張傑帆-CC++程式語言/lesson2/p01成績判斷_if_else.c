# include<stdio.h>
# include<stdlib.h>

int main(void){
	
	// 宣告成績，輸入成績存取到score 
	int score;
	scanf("%d",&score);
	
	// 選擇控制，條件判斷if...else...
	// 因為敘述只有一行，可以省略{} 
	if (score >= 60) printf("pass");
	else printf("fail");
	
	return 0;
}

