# include<stdio.h>
# include<stdlib.h>
# define N 3 
int main(void){

	int *a[N];
	int ct=10;
	int i,j;
	for(i=0;i<N;i++){
		a[i] = (int*)malloc(sizeof(int)*(i+1));
	}
	
	for(i=0;i<N;i++){
		for(j=0;j<i+1;j++){
			a[i][j] = ct;
			ct++;
		}
	}
	
	for(i=0;i<N;i++){
		for(j=0;j<i+1;j++){
			printf("%d ",a[i][j]);
		}
		puts(" ");
	}
	
	
	for(i=0;i<N-1;i++){
		free(a[i]);
	}



	return 0;
}

