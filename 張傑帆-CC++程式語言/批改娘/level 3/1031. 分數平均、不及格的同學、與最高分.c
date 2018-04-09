# include<stdio.h>
# include<stdlib.h>
# define STUDENT 3
/*
輸入班上3位同學分數, 求出它們的平均值
印出不及格的同學之號碼與分數(若無不及格的同學也會印出fail:)
印出其中最高分同學之分數
*/
int main(void){

	int score[STUDENT];
	int i,Sum=0,Max=0;
	double Avg;
	// 將三個成績存入score一維陣列 
	for(i=0;i<STUDENT;i++){
		scanf("%d",&score[i]);
		Sum+=score[i];
	}
	// print Avg
	Avg=(double)Sum/STUDENT;
	printf("avg = %.2lf\n",Avg);
	
	// find fail
	printf("fail:\n");
	for(i=0;i<STUDENT;i++){
		if(score[i]<60){
			printf("%d: %d\n",i+1,score[i]);
		}
	}
	
	
	// find Max
	int Maxidx;
	printf("highest:\n");
	for(i=0;i<STUDENT;i++){
		if(score[i]>Max) {
			Max=score[i];
			Maxidx=i;
		}
	}
	printf("%d: %d",Maxidx+1,Max);

	return 0;
}

