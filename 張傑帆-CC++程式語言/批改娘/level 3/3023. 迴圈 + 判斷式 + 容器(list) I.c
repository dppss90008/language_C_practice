# include<stdio.h>
# include<stdlib.h>

int main(void){

	int ary[80];
	int i=0,n,N;
	while(1){
		scanf("%d",&n);
		if(n==-1) break;
		else {
			ary[i] = n;
			i+=1;
		}		
	}
	int j,Sum=0;
	printf("[");
	for(j=0;j<i;j++){
		printf("%d",ary[j]);
		if(j<i-1) printf(", ");
		if(ary[j]>30)
		Sum+=ary[j];
	}
	printf("]\n");
	N=i;
	
	int temp;


    for(j=N;j>0;j--){
        for(i=0;i<j-1;i++){
            if(ary[i]>ary[i+1]){
                temp = ary[i+1];
                ary[i+1] = ary[i];
                ary[i] = temp;
            }
        }
    }
 	
 	printf("[");
 	for(i=0;i<N;i++){
        printf("%d",ary[i]);
        if(i<N-1) printf(", ");
    }
	printf("]\n");
	
	
	
	
	printf("%d",Sum);


	return 0;
}

