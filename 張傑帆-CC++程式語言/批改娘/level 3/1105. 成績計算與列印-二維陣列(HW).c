# include<stdio.h>
# include<stdlib.h>
# define STUDENT 5
# define LESSON 3

int main(void){

	// declare 2-D array
	int ary[STUDENT][LESSON]={76,73,85,88,84,76,92,82,92,82,91,85,72,74,73};
	int i,j;
	
	int Sum;
	double Avg;
	int total=0;
	int Maxidx;
	double MaxAvg=0;
	for(i=0;i<STUDENT;i++){
		printf("student %d\n",i+1);
		Sum=0;
		for(j=0;j<LESSON;j++){
			printf(" %d: %d\n",j+1,ary[i][j]);
			Sum+=ary[i][j];
		}
		Avg = (double)Sum/LESSON;
		if(Avg>MaxAvg){
			MaxAvg=Avg;
			Maxidx=j;
		}
		
		total += Sum;
		printf(" sum: %d\n avg: %.2lf\n",Sum,Avg);
	}
	
	Avg=(double)total/STUDENT/LESSON;
	printf("total: %d, avg: %.2lf\n",total,Avg);
	printf("highest avg: student %d: %.2lf",Maxidx,MaxAvg);


	return 0;
}

