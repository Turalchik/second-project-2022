#include <iostream>

int main(){
	int n;
	char s;
	std::cout << "Введите n: ";
	std::cin >> n;

	for(int i=1; i<=n; ++i){
		for(int k=0; k<n-i; ++k){
			std::cout<<' ';
		}
		for(int j=0; j<2*i-1; ++j){
			std::cout<<'*';
		}
		std::cout<<std::endl;
	}
	return 0;
}
