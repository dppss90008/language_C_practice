/************************ 
1033. �L�X�U�Z�`���B����-�G���}�C
		��J��Z�W3��P�Ǥ��ƫ�,�L�X�U�Z�`���B����,�Υ����`���B����
		�ѪR : �Q�ΤG���}�C�x�s��ơA�íp�⥭���`��.... 
************************/

# include<stdio.h>
# include<stdlib.h>
// declare 2 class, each class has 3 student
# define CLASS 2
# define STUDENT 3

int main(void){
	
	// declare 2-D array
	int ary[CLASS][STUDENT];
	int i,j;
	// store grade in 2-D array
	for(i=0;i<CLASS;i++){
		for(j=0;j<STUDENT;j++){
			scanf(" %d",&ary[i][j]);
		}
	}
	
	int Sum;
	double Avg;
	int total=0;
	for(i=0;i<CLASS;i++){
		printf("class %d\n",i+1);
		Sum=0;
		for(j=0;j<STUDENT;j++){
			printf(" %d: %d\n",j+1,ary[i][j]);
			Sum+=ary[i][j];
		}
		Avg = (double)Sum/STUDENT;
		total += Sum;
		printf(" sum: %d\n avg: %.2lf\n",Sum,Avg);
	}
	
	Avg=(double)total/CLASS/STUDENT;
	printf("total: %d, avg: %.2lf",total,Avg);

	return 0;
}

