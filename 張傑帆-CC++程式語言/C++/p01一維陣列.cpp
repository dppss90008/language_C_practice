# include<stdio.h>
# include<stdlib.h>
# define N 3 

int main(void){
	
	int n1 = 77;
	int i,ary1[N];
	int n2 = 88;
	
	for (i=0;i<N;i++){
		scanf("%d",&ary1[i]);
	}
	for (i=0;i<N+1;i++){
		printf("%d=>%d\n",i,ary1[i]);
	}
	
	
}
