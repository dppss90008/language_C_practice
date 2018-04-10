# include<stdio.h>
# include<stdlib.h>

int main(void){

	int n1,N,d;
	scanf("%d%d%d",&n1,&d,&N);
	int i;
	int Sum=0;
	int Ary[800];

	for(i=0;i<N;i++){
		Ary[i]= n1+d*i;
		Sum+=Ary[i]; 
	}


	for(i=0;i<N;i++){
		if(Ary[i]<0) printf("(");
		printf("%d",Ary[i]);
		if(Ary[i]<0) printf(")");
		if(i<N-1) printf(" + ");
	}
	
	printf(" = %d",Sum);
	
	
	return 0;
}

