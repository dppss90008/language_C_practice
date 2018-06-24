# include<stdio.h>
# include<stdlib.h>
# define N 5 

int main(void){

	int ary[N] = {34,12,5,66,1};
	int i,j,store;
	
	for (j=N;j>1;j--){
		for(i=0;i<j-1;i++){
			if (ary[i] > ary[i+1]){
				store = ary[i+1];
				ary[i+1] = ary[i];
				ary[i] = store;
			}	
		}
	}
	
	for(i=0;i<N;i++){
		printf("%d ",ary[i]);
	}
	

	return 0;
}

