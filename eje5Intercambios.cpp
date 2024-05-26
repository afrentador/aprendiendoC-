#include <iostream>

int main(){
    int a, b, camb;
    std::cout<<"Ingresa un valor:\n";
    std::cout<<"valor de a: ";std::cin>>a;
    std::cout<<"valor de b: ";std::cin>>b;
    camb=a;
    a=b;
    b=camb;
    std::cout<<"\nAqui tienes tus valor invertidos:\n";
    std::cout<<"valor de a: "<<a<<"\n";
    std::cout<<"valor de b: "<<b<<"\n";
    system("pause");
    return 0;
}