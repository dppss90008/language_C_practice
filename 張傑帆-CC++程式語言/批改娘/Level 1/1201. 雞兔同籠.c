# include<stdio.h>
# include<stdlib.h>

int main(void){

	int h,f;
	scanf("%d%d",&h,&f);
	
	double c,r;
	c = (double)(4*h-f)/2;
	r = (double)(f-2*h)/2;
	
	if(c<0 || r<0 || (int)(c*10)%10==5||(int)(r*10)%10==5)
		printf("NO");
	else 
		printf("YES\n%.0f %.0f",c,r);
	

	return 0;
}

