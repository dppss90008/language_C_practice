# include<stdio.h>
# include<stdlib.h>

int main(void){

	char a[3];
	
	int i;
	scanf("%s",&a);
	
	for(i=0;i<3;i++){
		if((int)a[i]>=48 && (int)a[i]<=57 ){
			printf("n=%s",a);
			return 0;
		}
		else{
			printf("is not a number");
			return 0;
		}
	
	}


		
	



	return 0;
}

