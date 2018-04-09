# include<stdio.h>
# include<stdlib.h>

int main(void){

	const int N;
	int i;
	scanf("%d",&N);
	int ary[N];
	
	for(i=0;i<N;i++){
		scanf("%d",&ary[i]);
	}
	for(i=N-1;i>=0;i--){
		printf("%d ",ary[i]);
	}
	printf("\n");
	return 0;
}

