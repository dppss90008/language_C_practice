# include<stdio.h>
# include<stdlib.h>

int main(void){

	// input 3�ӤT�������
	int a,b,c;
	printf("�п�J3����3�����: ");
	scanf("%d %d %d",&a,&b,&c);
	
	// sort of 3 ��� 
	int t;
	// first round 
	if (b<a){
		t = b ; b = a ; a = t;
	}
	if (c<a){
		t = c ; c = a ; a = t;
	}
	if (c<b){
		t = b ; b = c ; c = t;
	}
	printf("%d %d %d",a,b,c);
	
	if (a==b && b==c){
		printf("���T����\n");
	}
	if (a==b || b==c || c==a){
		printf("���y\n");
	}
	if (a*a + b*b == c*c){
		printf("����\n");
	}

	return 0;
}

