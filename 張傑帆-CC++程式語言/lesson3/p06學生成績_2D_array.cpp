# include<stdio.h>
# include<stdlib.h>
# define CLASS 2
# define STUDENT 3 

int main(void){

	int score[CLASS][STUDENT];
	int i,j;
	
	for(j=0;j<CLASS;j++){
	//	printf("Class %d\n",j+1);
		for(i=0;i<STUDENT;i++){
	//		printf(" student %d:",i+1);
			scanf("%d",&score[j][i]);
		}	
	}
	
	// ­pºâÁ`¤À 
	int Sum = 0;
	double Avg = 0;
	int total = 0;
	
	for(j=0;j<CLASS;j++){
		Sum = 0;
		printf("class %d\n",j+1);
		for(i=0;i<STUDENT;i++){
			printf(" %d: %d\n",i+1,score[j][i]);
			Sum += score[j][i];
			total += score[j][i];
		}	
		printf(" sum: %d\n",Sum);
		printf(" avg: %.2f\n",(double)Sum/STUDENT);
	}
	
	Avg = (double)total/(CLASS*STUDENT);
	printf("total: %d, avg= %.2lf",total,Avg);
	
		
	return 0;
}

