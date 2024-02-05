#include <iostream>

int main(){
    for( unsigned char i{0}; i< 255 ; ++i){
                if( (i > 0x40) && (i < 0x5B)){
                std::cout << i ;
                 if(i!='Z'){
                    std::cout << " ";
                }
            }
    }

    for (size_t i{0} , x {5}, y{22} ; y > 15 ; ++i , x+=5 , y-=1){
        std::cout << "i: " << i << ", x : " << x << ", y : " << y << std::endl;

    }
   
    return 0;
}