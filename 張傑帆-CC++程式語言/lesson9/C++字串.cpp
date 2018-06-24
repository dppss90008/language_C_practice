# include<stdio.h>
# include<stdlib.h>
# include<iostream>
# include<cstring>

using namespace std;
int main(void){

	string s1 = "Banana";
	s1 += "X";
	string s2 = s1;
	
	if(s2 == "BananaX") cout << "Yes" << endl;
	
	
	for(int i=0;i<s2.length();i++){
		cout << s2.operator[](i) << ",";
	}
	
	char a[80];
	strcpy(a,s1.c_str());
	cout << "\na: "<< a << endl;
	
	for(int i=0;i<s2.length();i++){
		if(strcmp(a[i],"a")==0){
			cout<< i;
		}
	}

	return 0;
}

