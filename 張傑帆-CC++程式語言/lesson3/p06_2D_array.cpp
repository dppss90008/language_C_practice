# include<stdio.h>
# include<stdlib.h>



int main(void){
	const int H = 3;
	const int W = 4;
		
	int ary[H][W]= {1, 2, 3, 4,
					5, 6, 7, 8,
					9,10,11,12};
	int i,j;
	
	for (j=0;j<H;j++){
		for (i=0;i<W;i++){
			printf("%2d ",ary[j][i]);
		}
		printf("\n");
	}
	
	

	return 0;
}

