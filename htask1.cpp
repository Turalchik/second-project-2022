#include <iostream>

int main(){

        double x, y = 1.5;

        for(int i = 0; i < 21; ++i){
                x = -1.5;
                for(int j = 0; j < 41; ++j){
                        if((x*x + y*y - 1)*(x*x + y*y - 1)*(x*x + y*y - 1) - x*x*y*y*y <= 0){
                                std::cout<<'*';
                        }else{
                                std::cout<<'.';
                        }
                        x += 3.0/40.0;
                }
                y -= 3.0/20.0;
                std::cout << std::endl;
        }
}


