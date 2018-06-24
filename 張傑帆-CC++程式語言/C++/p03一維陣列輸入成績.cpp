# include<stdio.h>
# include<stdlib.h>
# define N 3 

int main(void){
	
	int score[N];
	int i;
	
	// input 3 score
	for (i=0;i<N;i++){
		scanf("%d",&score[i]);
	}
	
	// Count Sum and Avg
	int Sum = 0;
	double Avg;
	
	for (i=0;i<N;i++){
		printf("%d ",score[i]);
		Sum += score[i];
	}	
	
	// Sum exchange to double type
	Avg = (double)Sum / N;
	printf("\nSum = %d \nAvg = %.2lf\n",Sum,Avg);
	
	// 判斷是否<60分 
	for (i=0;i<N;i++){
		if (score[i]<60){
			printf("%d : %d\n",i+1,score[i]);
		}
	}
	
	// 判斷成績最大的	
	int MaxScore = 0;
	int Maxpos = 0;
	
	for (i=0;i<N;i++){
		if (score[i] > MaxScore){
			MaxScore = score[i];
			Maxpos = i+1;
		}
	}
	printf("Highest pos = %d\nscore = %d",Maxpos,MaxScore);
	
	return 0;
}

