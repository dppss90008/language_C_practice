# include<stdio.h>
# include<stdlib.h>

int main(void){

	/*
	¿é¤JabCdE123 -> ABCDE123 
	*/
	char str[80]="abCdE123";
	int i;
	for(i=0;i<80;i++){
		if(str[i]>='a'&&str[i]<='z') 
			str[i]=str[i]-32;
		if(str[i]=='\0') 
			break;
	}
	
	puts(str);
	
	return 0;
}

