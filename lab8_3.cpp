#include<iostream>
using namespace std;

char before(char x){
	if(x > '`' || x < '@'){
		x = '0';
		return x;
	}
	if( x == 'A'){
		x = 'Z';
		return x;
	}else{
		x = x - 1;
		return x;
	}
}



int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
