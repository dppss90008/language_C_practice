# include<stdio.h>
# include<stdlib.h>

int main(void){
	
	int n ;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<=n;j++){
			printf("*");
		}
		printf("\n");
	}


	return 0;
}

