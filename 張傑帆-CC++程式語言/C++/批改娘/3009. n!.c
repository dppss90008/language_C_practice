# include<stdio.h>
# include<stdlib.h>

int main(void){

	int n,i=1,Sum=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		Sum*=i;
	}
	printf("%d",Sum);


	return 0;
}

