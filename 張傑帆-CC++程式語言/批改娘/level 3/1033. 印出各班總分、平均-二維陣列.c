/************************ 
1033. 印出各班總分、平均-二維陣列
		輸入兩班上3位同學分數後,印出各班總分、平均,及全校總分、平均
		解析 : 利用二維陣列儲存資料，並計算平均總分.... 
************************/

# include<stdio.h>
# include<stdlib.h>
// declare 2 class, each class has 3 student
# define CLASS 2
# define STUDENT 3

int main(void){
	
	// declare 2-D array
	int ary[CLASS][STUDENT];
	int i,j;
	// store grade in 2-D array
	for(i=0;i<CLASS;i++){
		for(j=0;j<STUDENT;j++){
			scanf(" %d",&ary[i][j]);
		}
	}
	
	int Sum;
	double Avg;
	int total=0;
	for(i=0;i<CLASS;i++){
		printf("class %d\n",i+1);
		Sum=0;
		for(j=0;j<STUDENT;j++){
			printf(" %d: %d\n",j+1,ary[i][j]);
			Sum+=ary[i][j];
		}
		Avg = (double)Sum/STUDENT;
		total += Sum;
		printf(" sum: %d\n avg: %.2lf\n",Sum,Avg);
	}
	
	Avg=(double)total/CLASS/STUDENT;
	printf("total: %d, avg: %.2lf",total,Avg);

	return 0;
}

