# include<stdio.h>
# include<stdlib.h>

int main(void){

	int n,i;
	int Sum=0;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		printf("%d",i);
		if(i<n){
			printf("+");
		}
		Sum += i;
	}
	printf(" = %d",Sum);
	return 0;
}

