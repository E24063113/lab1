#include<iostream>
using namespace std;
int main(){
	int a;
	cin >> a;
	while(a!=1){
		if(a%2==1){
			a=3*a+1;
			cout << a << endl;
		}
		else{
			a=a/2;
			cout << a << endl;
		}
	}
	cout << a << endl;
return 0;
}
