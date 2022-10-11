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
		for(int f=0; f<n; ++f){
		for(int k=0; k<n-i; ++k){
			std::cout<<' ';
		}
		for(int j=0; j<2*i-1; ++j){
			std::cout<<'*';
		}
		for(int k=0; k<n-i; ++k){
                        std::cout<<' ';
                }

		}
		std::cout<<std::endl;
	}


	for(int i=n-1; i>0; --i){
		for(int f=0; f<n; ++f){
		for(int j=0; j<n-i; ++j){
			std::cout<<' ';
		}
		for(int j=0; j<2*i-1; ++j){
			std::cout<<'*';
		}

		for(int j=0; j<n-i; ++j){
                        std::cout<<' ';
                }

		}
		std::cout<<std::endl;
	}
	return 0;
}

