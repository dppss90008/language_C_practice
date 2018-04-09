# include<stdio.h>
# include<stdlib.h>

int main(void){

	int L,S,ct=0;
    scanf("%d%d",&L,&S);
    while(1){
        if(L>S){
            S+=5;
            ct+=1;
        }
        if(S>L){
            S-=2;
            ct+=1;
        }
        if(L==S) break;
    }
 
    printf("%d",ct);
 



	return 0;
}

