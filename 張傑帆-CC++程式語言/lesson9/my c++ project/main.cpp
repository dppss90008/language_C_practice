#include <iostream>
# include "hello.h"

# include <cstring>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char** argv) {
	

	// �ʺA�O����t�m
	// ��l�Ƭ�100 
	int *ptr = new int(100);
	cout << " prt : "<< ptr << endl;
	cout << "*ptr : "<< *ptr << endl;
	*ptr = 200;
	cout << " prt : "<< ptr << endl;
	cout << "*ptr : "<< *ptr << endl;
	
	delete(ptr);
	cout << "======================" << endl;
	
	
	int size;
	cout << "�п�Jsize :";
	cin >> size;
	int *p = new int[size] ;
	// memmory ��l�� 
	memset(p,0,sizeof(int)*size);
	
//	for(int i=0;i<size;i++){
//		cout << "�п�J��" << i+1 << "�Ӽ� :�@" ;
//		cin >> p[i];
//	}
	for(int i=0;i<size;i++){
		cout << p[i] << endl;
	}
	delete []p;
	
	return 0;
}
