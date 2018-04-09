# include<stdio.h>
# include<stdlib.h>

int main(void){

	int up,down,h;
	double area;
	scanf("%d%d%d",&up,&down,&h);
	area = (double)(up+down)*h/2;
	printf("%.1lf",area);
	



	return 0;
}

