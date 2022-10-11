#include <iostream>

int main(){
	int n;
	char s;
	std::cout << "Введите n: ";
	std::cin >> n;
/*
	for(int i=0; i<n; ++i){
		std::cout<<'*';
	}
*/
	for(int i=1; i<=n; ++i){
		for(int j=0; j<i; ++j){
			std::cout<<'*';
		}
		std::cout<<std::endl;
	}
	return 0;
}
