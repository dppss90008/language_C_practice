/*
可存3名公司成員姓名、電話、編號，依編號查詢 
*/ 


# include<stdio.h>
# include<stdlib.h>
# define N 3

struct Employee{
	char Name[20];
	char Phone[11];
	int Id;
};

typedef struct Employee Employee;

int main(void){

	Employee p[N];
	
	int i;
	for(i=0;i<N;i++){
		scanf("%s",p[i].Name);
		scanf("%s",p[i].Phone);
		scanf("%d",&p[i].Id);
	}
	int qId;
	scanf("%d",&qId);
	
	int tag=0;
	for(i=0;i<N;i++){
		if(p[i].Id==qId){
			printf("found\n");
			printf("Name: %s\n",p[i].Name);
			printf("Phone: %s\n",p[i].Phone);
			printf("Id: %d",p[i].Id);
			tag = 1;
		}
	}
	
	if(tag == 0){
		printf("not found");
	}

	return 0;
}

