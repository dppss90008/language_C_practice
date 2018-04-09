# include<stdio.h>
# include<stdlib.h>

int main(void){

	int x,Doz,Remain;
	scanf("%d",&x);
	Doz = x/12;
	Remain = x%12;
	printf("%d dozen",Doz);
	if (Remain > 0) printf(" and %d",Remain);



	return 0;
}

