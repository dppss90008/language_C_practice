# include<stdio.h>
# include<stdlib.h>

int main(void){

	int i,Sum=0,n;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
	
		Sum += i;
	}
	printf("%d",Sum);

	return 0;
}

