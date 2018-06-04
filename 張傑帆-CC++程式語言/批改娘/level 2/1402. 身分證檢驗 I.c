# include<stdio.h>
# include<stdlib.h>
# define N 26

int main(void){

	int ID_Ary[N] = {10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
	char Name_Ary[N] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	
	char ID[10] ;
	ID[9] = '?';
	scanf("%s",&ID);
	
	if(ID[9]=='?'){
		printf("fake");
		return 0;
	}

	
	int i ;	
	int numID ;
	char Eng = ID[0] ;
	if(Eng>='a' && Eng <='z') Eng = Eng-32;
	

	for(i=0;i<N;i++){
		if(Eng ==Name_Ary[i]){
			numID = ID_Ary[i];
		}
	}
	
	int Sum = 0;
	int j = 8;
	for(i=1;i<=8;i++){
		Sum += (ID[i]-48)*j;
		j-=1;
	}

	Sum = Sum + ID[9]-48 + numID/10 + numID%10*9;
	
//	printf("%d",Sum);
	if(Sum%10==0) printf("real");
	else printf("fake");

	return 0;
}

