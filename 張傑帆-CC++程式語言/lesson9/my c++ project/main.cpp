#include <iostream>
# include "hello.h"

# include <cstring>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char** argv) {
	

	// 動態記憶體配置
	// 初始化為100 
	int *ptr = new int(100);
	cout << " prt : "<< ptr << endl;
	cout << "*ptr : "<< *ptr << endl;
	*ptr = 200;
	cout << " prt : "<< ptr << endl;
	cout << "*ptr : "<< *ptr << endl;
	
	delete(ptr);
	cout << "======================" << endl;
	
	
	int size;
	cout << "請輸入size :";
	cin >> size;
	int *p = new int[size] ;
	// memmory 初始化 
	memset(p,0,sizeof(int)*size);
	
//	for(int i=0;i<size;i++){
//		cout << "請輸入第" << i+1 << "個數 :　" ;
//		cin >> p[i];
//	}
	for(int i=0;i<size;i++){
		cout << p[i] << endl;
	}
	delete []p;
	
	return 0;
}
