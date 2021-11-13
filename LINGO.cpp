#include <iostream>
#include <string>

using std::cin;using std::cout;using std::endl;using std::string;

int main(){
	
	long long int n;
	cin>>n;
	if(n%2 != 0|| n <= 0){
		cout<<"No"<<endl;
	}else{
		cout<<"Yes"<<endl;
	}
	
	return 0;
}
