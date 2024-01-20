#include <iostream>

double volume(){
    double width {10.0};
    double length {20.1};
    double height {4.5};

    return width * length * height;

};

int main(){
    double vol = volume();

    std::cout << vol << std::endl;
}