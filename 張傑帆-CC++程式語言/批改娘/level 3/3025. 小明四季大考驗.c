# include<stdio.h>
# include<stdlib.h>

int main(void){

	int month;
	scanf("%d",&month);
	
	if(month>=3 && month<=5){
		printf("Spring");
	}
	else if (month >= 6 && month <=8 ){
		printf("Summer");
	}
	else if(month>=9 && month <= 11){
		printf("Autumn");
	}else if(month==1 || month==2 || month == 12 ){
		printf("Winter");
	}else{
		printf("Month doesn't exist!");
	}



	return 0;
}

