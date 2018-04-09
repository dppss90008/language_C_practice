# include<stdio.h>
# include<stdlib.h>
# define N 5

int main(void){

	int Ary[N];
	int i,j,temp;
	for(i=0;i<N;i++){
		scanf("%d",&Ary[i]);
	}
	
	for(j=N;j>0;j--){
		for(i=0;i<j-1;i++){
			if(Ary[i]>Ary[i+1]){
				temp = Ary[i+1];
				Ary[i+1] = Ary[i];
				Ary[i] = temp;
			}
		}
	}
	

	for(i=0;i<N;i++){
		printf("%d ",Ary[i]);
	}

	return 0;
}

