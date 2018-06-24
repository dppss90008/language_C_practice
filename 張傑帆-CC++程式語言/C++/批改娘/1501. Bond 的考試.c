# include<stdio.h>
# include<stdlib.h>

int main(void){

	int N,dig=1,temp,temp2;
	scanf("%d",&N);
	temp = N;
	temp2 = N;
	while(1){
		if(temp>=10){
			temp/=10;
			dig*=10;
		}
		if(temp<10) break;
	}

	
	
	
	while(1){
		if(temp2%7==0){
			printf("YES\n");
			break;
		}
		
		if(N/dig==7){
			printf("YES\n");
			break;
		}
		else{
			N%=dig;
			dig/=10;
			if(dig==1){
				printf("NO\n");
				break;
			}		
		}		
	}
	
	
	return 0;
}

