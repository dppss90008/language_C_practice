# include<stdio.h>
# include<stdlib.h>

int max(int student,int *score);
int MaxScore(int n,int *P);

int main(void){

	int Grade[5] = {89,10,23,150,78};
	printf("Max score : %d",max(5,Grade));
	printf("Index : %d",MaxScore(5,Grade));



	return 0;
}

int max(int student,int *score){
	int Max = 0;
	int i;
	for(i=0;i<student;i++){
		if(score[i] > Max) Max=score[i];
	}
	return Max;
}

int MaxScore(int n,int *P){
	int idx;
	int i;
	for(i=0;i<n;i++){
		if(P[i] > P[idx]){
		
			idx = i;
		}
	}
	
	return idx+1;
} 
