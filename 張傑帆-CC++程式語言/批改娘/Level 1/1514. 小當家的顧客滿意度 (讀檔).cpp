# include<stdio.h>
# include<stdlib.h>
# include<string.h>

int main(void){

	FILE *in;
	char str[100];
	double num = 0;
	int ct = 0;
	char s[128];
	int n;
	scanf("%s",s);
	
	in = fopen(s,"r");
	while(fscanf(in,"% s",&str)!=EOF){
		fscanf(in,"%s",&str);
		num += atoi(str);
		ct += 1;
		fscanf(in,"%d",&n);
		printf("%d",n);
	}

	fclose(in);
	printf("%.2f",num/ct);

	return 0;
}

