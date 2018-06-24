# include<stdio.h>
# include<stdlib.h>
# include<string.h>

int main(void){

	FILE *in;
	char str[100];
	int num;
	int i = 0;
	
	in = fopen("MathScore01.txt","r");
	while(fscanf(in,"% s",&str)!=EOF){
		fscanf(in,"%s",&str);
		printf("%s ",str);
		printf("\n");
		
	}
	fclose(in);

	
	return 0;
}

