# include<stdio.h>
# include<stdlib.h>
# define N 6
int main(void){
	
	// declare Ary[N]
	int Ary[N] = {34,12,67,5,1,13};
	int i,j,temp;
	
	// bubble sort 
	for(j=N-1;j>0;j--){
		for(i=0;i<j;i++){
			if (Ary[i]>Ary[i+1]){
				temp = Ary[i+1];
				Ary[i+1] = Ary[i];
				Ary[i] = temp;
			}
		}
	}
	
	// Print out result
	for(i=0;i<N;i++){
		printf("%d ",Ary[i]);
		}
	printf("\n");
	
	system("pause");
	return 0;
}

