# include<stdio.h>
# include<stdlib.h>
# include<iostream>

int call_value(int a){
	a = a+1;
	return a;
}
void call_address(int *p){
	*p += 1;
}

void call_ref(int &a){
	a = a+1;
}

using namespace std;
int main(void){
	
	int n = 10;
	call_ref(n);
	cout << n << endl;

	



	return 0;
}

