# include<stdio.h>
# include<stdlib.h>

int main(void){

	int n,i;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		if(i==4)
			continue;	
		printf("floor %d",i);
		if (i<n) printf("\n");
	}


	return 0;
}

