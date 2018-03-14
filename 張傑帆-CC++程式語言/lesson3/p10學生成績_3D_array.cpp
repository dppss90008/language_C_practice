# include<stdio.h>
# include<stdlib.h>
# define CLASS 2
# define STUDENT 3
# define SUB 2

int main(void){

	int score[CLASS][STUDENT][SUB]={1,2,3,4,5,6,7,8,9,10,11,12};
	int i,j,k;
	
	for(j=0;j<CLASS;j++){
		for(i=0;i<STUDENT;i++){
			for(k=0;k<SUB;k++){
			//scanf("%d",&score[j][i][k]);
			}	
		}	
	}
	
	for(j=0;j<CLASS;j++){
		printf("class %d\n",j+1);
		for(i=0;i<STUDENT;i++){
			printf(" student : %d\n",i+1);
			for(k=0;k<SUB;k++){
			printf("  sub %d :",k+1);
			printf("%d\n",score[j][i][k]);
			}	
		}	
	}
	
		
	return 0;
}

