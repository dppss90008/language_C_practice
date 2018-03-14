# include<stdio.h>
# include<stdlib.h>
# define STUDENT 5
# define CLASS 3
 
int main(void){

	int score[STUDENT][CLASS]= {76,73,85,88,84,76,92,82,92,82,91,85,72,74,73};
	int i,j,Sum;
	int Max=0,Maxpos=0;
	
	for(i=0;i<STUDENT;i++){
		Sum = 0;
		printf("student %d :",i+1);
		for(j=0;j<CLASS;j++){
			printf(" %d ",score[i][j]);
			Sum += score[i][j];
		}
		printf("Sum= %d\n",Sum);
		if(Sum > Max){
			Max = Sum;
			Maxpos = i+1;
		}
	}

	printf("%.2f %d",(double)Max/CLASS,Maxpos);

	return 0;
}

