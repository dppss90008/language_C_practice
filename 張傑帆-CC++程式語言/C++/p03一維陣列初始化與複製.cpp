# include<stdio.h>
# include<stdlib.h>
# include<string.h> // �ϥ�memcpy fun �n�ϥΦ��禡�w
 
# define N 5 //�ŧi�`�� 


int main(void){

	int ary1[N] = {11,22,33,44,55};
	int ary2[N] = {0};
	
//	ary2 = ary1; ���i�H�o�˨ϥ�
//	ary2[0] = ary1[0]; ���M�i�H�@�Ӥ@�ӫ��w�A���S�Ĳv
// �ϥ�memcpy fun �ӽƻs�}�C
 	memcpy(ary2,ary1, sizeof(int)*N);
 
// ��Xary1�}�C���G  
	int i;
	for (i=0;i<N;i++){
		printf("%d ",ary1[i]);
	}
	
	printf("\n");

// ��Xary2�}�C���G 
	for (i=0;i<N;i++){
		printf("%d ",ary2[i]);
	}


	return 0;
}

