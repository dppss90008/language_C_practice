# include<stdio.h>
# include<stdlib.h>

int main(void){

	// input 3個三角形邊長
	int a,b,c;
	printf("請輸入3角形3個邊長: ");
	scanf("%d %d %d",&a,&b,&c);
	
	// sort of 3 邊長 
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
		printf("正三角形\n");
	}
	if (a==b || b==c || c==a){
		printf("等腰\n");
	}
	if (a*a + b*b == c*c){
		printf("直角\n");
	}

	return 0;
}

