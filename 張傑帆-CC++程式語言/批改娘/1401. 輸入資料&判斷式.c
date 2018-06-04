# include<stdio.h>
# include<stdlib.h>
#include <string.h>

int main(void){
	
	char str[20];
	int i;
	float FloatSum =1;
	int IntSum = 1;
	int Con=0;
	
	while(1==1){
		scanf("%s",str);
		
		// §PÂ_¦r¦ê¬O§_¬Ûµ¥ 
		if(strcmp(str,"q")==0) break;
		
		for(i=0;i<20;i++){
			if(str[i]=='.'){
				FloatSum *= atof(str);
				Con = 1;
				continue;
			}
		}
		
		if(Con==1) {
			Con = 0;
			continue;
		}
		
		IntSum *= atoi(str);
		
			
	}
	
	printf("%.2f\n",FloatSum);
	printf("%d\n",IntSum);
	
	
	
	
	if(FloatSum==(float)IntSum) printf("Float = Int");
	else if(FloatSum>(float)IntSum) printf("Float > Int");
	else printf("Float < Int");

	return 0;
}

