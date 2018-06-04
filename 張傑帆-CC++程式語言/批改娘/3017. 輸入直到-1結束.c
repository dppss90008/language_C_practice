# include<stdio.h>
# include<stdlib.h>

int main(void){
	
	int n;
	int ct;
	int Sum=0;
	int Max=0;
	int MaxIdx;
	
	while(1){
		scanf("%d",&n);
		if(n==-1) break;
		Sum += n;
		ct += 1;
		if(n>Max){
			MaxIdx=ct;
			Max=n;
		}
	
	}
	
	printf("%d\n%.1f\n%d\n%d",Sum,(double)Sum/ct,Max,MaxIdx);



	return 0;
}

