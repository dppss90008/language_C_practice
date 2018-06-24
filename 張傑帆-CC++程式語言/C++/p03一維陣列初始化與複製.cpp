# include<stdio.h>
# include<stdlib.h>
# include<string.h> // 使用memcpy fun 要使用此函式庫
 
# define N 5 //宣告常數 


int main(void){

	int ary1[N] = {11,22,33,44,55};
	int ary2[N] = {0};
	
//	ary2 = ary1; 不可以這樣使用
//	ary2[0] = ary1[0]; 雖然可以一個一個指定，但沒效率
// 使用memcpy fun 來複製陣列
 	memcpy(ary2,ary1, sizeof(int)*N);
 
// 輸出ary1陣列結果  
	int i;
	for (i=0;i<N;i++){
		printf("%d ",ary1[i]);
	}
	
	printf("\n");

// 輸出ary2陣列結果 
	for (i=0;i<N;i++){
		printf("%d ",ary2[i]);
	}


	return 0;
}

