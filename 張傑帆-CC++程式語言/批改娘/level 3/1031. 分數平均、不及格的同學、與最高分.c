# include<stdio.h>
# include<stdlib.h>
# define STUDENT 3
/*
��J�Z�W3��P�Ǥ���, �D�X���̪�������
�L�X���ή檺�P�Ǥ����X�P����(�Y�L���ή檺�P�Ǥ]�|�L�Xfail:)
�L�X�䤤�̰����P�Ǥ�����
*/
int main(void){

	int score[STUDENT];
	int i,Sum=0,Max=0;
	double Avg;
	// �N�T�Ӧ��Z�s�Jscore�@���}�C 
	for(i=0;i<STUDENT;i++){
		scanf("%d",&score[i]);
		Sum+=score[i];
	}
	// print Avg
	Avg=(double)Sum/STUDENT;
	printf("avg = %.2lf\n",Avg);
	
	// find fail
	printf("fail:\n");
	for(i=0;i<STUDENT;i++){
		if(score[i]<60){
			printf("%d: %d\n",i+1,score[i]);
		}
	}
	
	
	// find Max
	int Maxidx;
	printf("highest:\n");
	for(i=0;i<STUDENT;i++){
		if(score[i]>Max) {
			Max=score[i];
			Maxidx=i;
		}
	}
	printf("%d: %d",Maxidx+1,Max);

	return 0;
}

